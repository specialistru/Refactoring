#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINE_LEN 1024
#define MAX_CHECKS 1000
#define MAX_PATH_LEN 260
#define MAX_LOG_BUFFER 8192

// Определения прототипов
#define X(fn) int fn(const char* line, char* advice, size_t advice_len);
#include "check_registry.def"
#undef X

// Тип функции
typedef int (*CheckFunc)(const char*, char*, size_t);

// Массив указателей
#define X(fn) fn,
CheckFunc checks_array[] = {
    #include "check_registry.def"
};
#undef X

#define NUM_CHECKS (sizeof(checks_array) / sizeof(checks_array[0]))

// ====================== ЛОГИРОВАНИЕ =========================

CRITICAL_SECTION log_lock;
char log_buffer[MAX_LOG_BUFFER];
size_t log_offset = 0;

void current_time_str(char* buffer, size_t size) {
    time_t now = time(NULL);
    struct tm* t = localtime(&now);
    strftime(buffer, size, "%H:%M:%S", t);
}

void buffered_log(const char* file_name, int line_num, const char* line, const char* advice) {
    EnterCriticalSection(&log_lock);

    char time_str[16];
    current_time_str(time_str, sizeof(time_str));

    char temp[512];
    int len = snprintf(temp, sizeof(temp), "[%s] %s:%d: %sAdvice: %s\n\n", time_str, file_name, line_num, line, advice);

    if (log_offset + len < MAX_LOG_BUFFER) {
        memcpy(log_buffer + log_offset, temp, len);
        log_offset += len;
    }

    LeaveCriticalSection(&log_lock);
}

void flush_logs(const char* log_file) {
    EnterCriticalSection(&log_lock);

    FILE* f = fopen(log_file, "a");
    if (f) {
        fwrite(log_buffer, 1, log_offset, f);
        fclose(f);
    }
    log_offset = 0;

    LeaveCriticalSection(&log_lock);
}

// ====================== ОБРАБОТКА ФАЙЛА =========================

DWORD WINAPI process_file_thread(LPVOID lpParam);

typedef struct {
    char filepath[MAX_PATH_LEN];
} ThreadParam;

void process_file(const char* file_path) {
    FILE* f = fopen(file_path, "r");
    if (!f) return;

    char line[MAX_LINE_LEN];
    int line_num = 0;

    while (fgets(line, sizeof(line), f)) {
        line_num++;
        line[strcspn(line, "\r\n")] = 0;

        for (int i = 0; i < MAX_CHECKS; ++i) {
            char advice[256] = { 0 };
            int result = checks_array[i](line, advice, sizeof(advice));

            if (!result) {
                buffered_log(file_path, line_num, line, advice);
            }
        }
    }
    fclose(f);
}

DWORD WINAPI process_file_thread(LPVOID lpParam) {
    ThreadParam* param = (ThreadParam*)lpParam;
    process_file(param->filepath);
    free(param);
    return 0;
}

// ====================== РЕКУРСИВНЫЙ ПОИСК ФАЙЛОВ =========================

void process_directory(const char* directory, const char* extension) {
    WIN32_FIND_DATA ffd;
    HANDLE hFind;
    char search_path[MAX_PATH];

    snprintf(search_path, MAX_PATH, "%s\\*", directory);
    hFind = FindFirstFileEx(search_path, FindExInfoBasic, &ffd, FindExSearchNameMatch, NULL, FIND_FIRST_EX_LARGE_FETCH);

    if (hFind == INVALID_HANDLE_VALUE) return;

    do {
        if (strcmp(ffd.cFileName, ".") == 0 || strcmp(ffd.cFileName, "..") == 0) continue;

        char full_path[MAX_PATH];
        snprintf(full_path, MAX_PATH, "%s\\%s", directory, ffd.cFileName);

        if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            process_directory(full_path, extension);  // рекурсивный вызов
        } else if (strstr(ffd.cFileName, extension)) {
            ThreadParam* param = malloc(sizeof(ThreadParam));
            strncpy(param->filepath, full_path, MAX_PATH_LEN);
            CreateThread(NULL, 0, process_file_thread, param, 0, NULL);
        }

    } while (FindNextFile(hFind, &ffd));

    FindClose(hFind);
}

// ====================== MAIN =========================

int main(int argc, char* argv[]) {
    const char* target_dir = "c:\\1000";
    const char* extension = ".c";
    const char* log_file = "log.txt";

    if (argc >= 2) target_dir = argv[1];
    if (argc >= 3) extension = argv[2];

    InitializeCriticalSection(&log_lock);
    printf("Сканирование директории: %s (файлы *%s)\n", target_dir, extension);

    process_directory(target_dir, extension);

    // Подождать, чтобы потоки завершились (упрощённо)
    Sleep(3000);

    flush_logs(log_file);
    DeleteCriticalSection(&log_lock);

    printf("Завершено. Логи записаны в %s\n", log_file);
    return 0;
}
