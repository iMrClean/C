#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"

/*
 * Лабораторная работа №14
 *
 * Дана динамическая прямоугольная матрица заполненная случайными элементами.
 * Транспонировать матрицу.
 */
int main() {
    srand((unsigned) time(NULL));

    int **p = NULL;
    int **q = NULL;
    int r = 0, c = 0;

    printf_s("Input number of rows:");
    scanf("%d", &r);
    printf_s("Input number of columns:");
    scanf("%d", &c);

    p = (int **) calloc(r, sizeof(int *));
    for (int i = 0; i < r; i++)
        p[i] = (int *) calloc(c, sizeof(int));

    q = (int **) calloc(c, sizeof(int *));
    for (int i = 0; i < c; i++)
        q[i] = (int *) calloc(r, sizeof(int));

    random_matrix(p, r, c);

    printf_s("\n\tInitial random array\n\t");
    print_matrix(p, r, c);

    transpose_matrix(p, q, c, r);

    printf_s("\n\tTransposted random array\n\t");
    print_matrix(q, r, c);

    for (int i = 0; i < r; ++i) {
        free(p[i]);
    }
    for (int i = 0; i < c; ++i) {
        free(q[i]);
    }
    free(p);
    free(q);
    return 0;
}