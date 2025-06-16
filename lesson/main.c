#include <stdio.h>
#include <time.h>

// Получение времени в микросекундах
long get_microseconds() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ts.tv_sec * 1000000L + ts.tv_nsec / 1000L;
}

// Глобальный файловый поток для логирования
FILE *log_file = NULL;

// Макрос для измерения времени и вывода в консоль + файл
#define MEASURE_AND_PRINT(fn_before, fn_after, num) do { \
    fprintf(stdout, "Пример %03d:\n", num); \
    fprintf(log_file, "Пример %03d:\n", num); \
    long start = get_microseconds(); \
    fn_before(); \
    long end = get_microseconds(); \
    fprintf(stdout, "Время до рефакторинга: %ld мкс\n", end - start); \
    fprintf(log_file, "Время до рефакторинга: %ld мкс\n", end - start); \
    start = get_microseconds(); \
    fn_after(); \
    end = get_microseconds(); \
    fprintf(stdout, "Время после рефакторинга: %ld мкс\n\n", end - start); \
    fprintf(log_file, "Время после рефакторинга: %ld мкс\n\n", end - start); \
} while(0)


// █ Список примеров
#define EXAMPLES_LIST \
    X(001) \
    X(002) \
    X(003) \
    X(004) \
    X(005) \
    X(006) \
    X(007) \
    X(008) \
    X(009) \
    X(010)

// Определение функций
#define X(n) \
    void before_example##n() { for (volatile int i = 0; i < 1000 * n; i++); } \
    void after_example##n()  { for (volatile int i = 0; i < 500 * n; i++); }
EXAMPLES_LIST
#undef X

typedef void (*fn_t)(void);

// Генерация массивов указателей на функции
#define X(n) before_example##n,
fn_t before_functions[] = {
    EXAMPLES_LIST
};
#undef X

#define X(n) after_example##n,
fn_t after_functions[] = {
    EXAMPLES_LIST
};
#undef X

// Подсчёт количества примеров
#define X(n) +1
int examples_count = 0 EXAMPLES_LIST;
#undef X

int main(void) {
    // Открываем файл логов
    log_file = fopen("log.txt", "w");
    if (!log_file) {
        perror("Не удалось открыть log.txt для записи");
        return 1;
    }

    for (int i = 0; i < examples_count; i++) {
        MEASURE_AND_PRINT(before_functions[i], after_functions[i], i + 1);
    }

    fclose(log_file);
    return 0;
}
