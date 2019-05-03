#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"

/*
 * Лабораторная работа №13
 *
 * Дана квадратная статическая матрица заданная случайными числами.
 * Методом попарных перестановок отсортировать по столбцам матрицу.
 *
 */
const int N = 5;

int main() {
    srand((unsigned) time(NULL));
    int **array = (int **) calloc(N, sizeof(int *));
    for (int i = 0; i < N; i++) {
        array[i] = (int *) calloc(N, sizeof(int));
    }

    printf_s("\n\tOriginal Array");
    random_array(array);
    print_array(array);

    printf_s("\n\tSorted Array");
    sort_array(array);
    print_array(array);

    for (int i = 0; i < N; ++i) {
        free(array[i]);
    }
    free(array);
    return 0;
}