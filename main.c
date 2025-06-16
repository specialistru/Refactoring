#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define MAX_LINE_LEN 1024
#define MAX_CHECKS 10

// Прототипы функций проверок из example.c
int after_example_0001(const char* line, char* advice, size_t advice_len);
int after_example_0002(const char* line, char* advice, size_t advice_len);
int after_example_0003(const char* line, char* advice, size_t advice_len);
int after_example_0004(const char* line, char* advice, size_t advice_len);
int after_example_0005(const char* line, char* advice, size_t advice_len);
int after_example_0006(const char* line, char* advice, size_t advice_len);
int after_example_0007(const char* line, char* advice, size_t advice_len);
int after_example_0008(const char* line, char* advice, size_t advice_len);
int after_example_0009(const char* line, char* advice, size_t advice_len);
int after_example_0010(const char* line, char* advice, size_t advice_len);

// Массив указателей на функции проверок
typedef int (*CheckFunc)(const char*, char*, size_t);
CheckFunc checks_array[MAX_CHECKS] = {
    after_example_0001,
    after_example_0002,
    after_example_0003,
    after_example_0004,
    after_example_0005,
    after_example_0006,
    after_example_0007,
    after_example_0008,
    after_example_0009,
    after_example_0010
};

// Возвращает текущее время в формате "HH:MM:SS"
void current_time_str(char* buffer, size_t size) {
    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);
    strftime(buffer, size, "%H:%M:%S", tm_info);
}

// Записывает сообщение в log.txt
void write_log(const char* file_name, int line_num, const char* line, const char* advice) {
    FILE* log = fopen("log.txt", "a");
    if (!log) return;

    char time_str[16];
    current_time_str(time_str, sizeof(time_str));
    fprintf(log, "[%s] %s:%d: %s\nAdvice: %s\n\n", time_str, file_name, line_num, line, advice);
    fclose(log);
}

// Обработка одного файла
void process_file(const char* file_path) {
    FILE* f = fopen(file_path, "r");
    if (!f) {
        printf("Не удалось открыть файл %s\n", file_path);
        return;
    }

    char line[MAX_LINE_LEN];
    int line_num = 0;

    while (fgets(line, sizeof(line), f)) {
        line_num++;

        for (int i = 0; i < MAX_CHECKS; i++) {
            char advice[256] = {0};
            int result = checks_array[i](line, advice, sizeof(advice));

            if (result) {
                printf("ок\n");
            } else {
                write_log(file_path, line_num, line, advice);
            }
        }
    }
    fclose(f);
}

// Поиск файлов с расширением .c и .h в каталоге c:\1000
void find_and_process_files(const char* directory) {
    WIN32_FIND_DATA findFileData;
    HANDLE hFind = INVALID_HANDLE_VALUE;
    char search_path[MAX_PATH];

    // Файлы .c
    snprintf(search_path, MAX_PATH, "%s\\*.c", directory);
    hFind = FindFirstFile(search_path, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        printf("Файлы .c не найдены в %s\n", directory);
    } else {
        do {
            char full_path[MAX_PATH];
            snprintf(full_path, MAX_PATH, "%s\\%s", directory, findFileData.cFileName);
            process_file(full_path);
        } while (FindNextFile(hFind, &findFileData) != 0);
        FindClose(hFind);
    }

    // Файлы .h
    snprintf(search_path, MAX_PATH, "%s\\*.h", directory);
    hFind = FindFirstFile(search_path, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        printf("Файлы .h не найдены в %s\n", directory);
    } else {
        do {
            char full_path[MAX_PATH];
            snprintf(full_path, MAX_PATH, "%s\\%s", directory, findFileData.cFileName);
            process_file(full_path);
        } while (FindNextFile(hFind, &findFileData) != 0);
        FindClose(hFind);
    }
}

int main() {
    find_and_process_files("c:\\1000");
    return 0;
}
\
