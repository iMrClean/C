#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

/*
 * Лабораторная работа №11
 *
 * Дана квадратная матрица.
 * Найти:
 * а)Минимальное значение выше главной диагонали
 * б)Максимальное значение ниже главной диагонали
 * в)Поменять значения все четные на max.
 * г)Поменять значения все нечетные на min.
 *
 */
const int N = 5;
const unsigned short RANGE = 5;

int main() {
    int min = 0, max = 0;
    int **b = NULL;
    b = (int **) calloc(N, sizeof(int *));
    for (int i = 0; i < N; i++) {
        b[i] = (int *) calloc(N, sizeof(int));
    }
    srand((unsigned) time(NULL));
    random_array(b);
    print_array(b);

    printf_s("\n\tminimum\n\t");
    min = min_element(b, min);
    printf_s("%d", min);

    printf_s("\n\tmaximum\n\t");
    max = max_element(b, max);
    printf("%d", max);

    change(b, max, min);
    print_array(b);

    for (int i = 0; i < N; ++i) {
        free(b[i]);
    }
    free(b);
    return 0;
}