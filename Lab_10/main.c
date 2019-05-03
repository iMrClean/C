#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"

/*
 * Лабораторная работа №10
 *
 * Дан массив заполненный случайными числами, для каждого столбца определить
 * минимальное значение и отсортировать столбцы матрицы.
 *
 */
const int R = 3;
const int C = 3;
const int N = 10;


int main() {
    srand((unsigned) time(NULL));

    int **a = (int **) malloc(sizeof(int *) * R);
    for (int i = 0; i < R; ++i) {
        a[i] = (int *) malloc(sizeof(int) * C);
    }
    int *b = malloc(sizeof(int) * C);

    printf_s("\n\tOriginal Array\n\t");
    random_array(a);

    printf_s("\n\n\tSearch min Elements\n\n\t");
    search_min_elements(a, b);
    print_array(b);

    printf_s("\n\n\tSorted array of min elements\n\n\t");
    sort_array_min_elements(a, b);
    print_array(b);

    printf_s("\n\n\tSorted Array\n\t");
    sort_array_by_raw(a);

    free(b);
    for (int i = 0; i < R; ++i) {
        free(a[i]);
    }
    free(a);
    return 0;
}