#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"

/*
 * Лабораторная работа №7
 *
 * Исходный массив заполненный случайными числами(в котором есть повторяющиеся элементы).
 * По содержимому сформировать новый массив в котором нет повторяющихся элементов.
 */
const unsigned short RANGE = 10;
const int N = 5;

int main() {
    int count = 0;
    int *a = malloc(sizeof(int) * N);
    int *b = malloc(sizeof(int) * N);
    srand((unsigned) time(NULL));

    printf_s("\n\tInitial array:\n\t");
    random_array(a);

    printf("\n\tNew array without repeats:\n\t");
    count = no_repeats_array(a, b, count);

    for (int i = 0; i < count; i++) {
        printf_s("%2d", b[i]);
    }

    free(b);
    free(a);
    return 0;
}