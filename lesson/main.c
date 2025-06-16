#include <stdio.h>

// Объявление функции из example.c
void run_example(int);

int main(void) {
    for (int i = 1; i <= 300; i++) {
        printf("=== Пример %03d ===\n", i);
        run_example(i);
        printf("\n");
    }
    return 0;
}
