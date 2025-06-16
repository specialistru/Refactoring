#include <stdio.h>

// Объявление функции из example.c
void run_example(int number);

int main(void) {
    for (int i = 1; i <= 300; i++) {
        run_example(i);
    }
    return 0;
}
