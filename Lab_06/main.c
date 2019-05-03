#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

/*
 * Лабораторная работа №6
 *
 * Исходный массив заполненный случайными числами.
 * Преобразовать исходный массив так, чтобы все нечетные элементы остались на местах, а все четные расположились в возврастающем порядке
 */
const int N = 10;
const unsigned short RANGE = 10;

int main() {
    int *a = malloc(sizeof(int) * N);
    int acc = 0;
    srand((unsigned) time(NULL));

    printf_s("\n\tInitial array A:\n\t");

    random_array(a);

    printf_s("\n\tNew array B:\n\t");
    sorted_array(a);

    for (int i = 0; i < N; i++) {
        printf_s("%2d", a[acc++]);
    }

    free(a);
    return 0;
}