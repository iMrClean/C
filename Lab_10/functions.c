
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void random_array(int **a) {
    for (int i = 0; i < R; i++) {
        printf_s("\n\t");
        for (int j = 0; j < C; j++) {
            a[i][j] = rand() % N + 1;
            printf_s("%4d", a[i][j]);
        }
    }
}

void search_min_elements(int **a, int *b) {
    int min;

    for (int j = 0; j < C; j++) {
        min = a[0][j];
        for (int i = 0; i < R; i++) {

            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        b[j] = min;
    }
}

void sort_array_min_elements(int **a, int *b) {
    int tmp;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C - 1; j++) {
            if (b[j] > b[j + 1]) {
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
                for (int k = 0; k < R; k++) {
                    tmp = a[k][j];
                    a[k][j] = a[k][j + 1];
                    a[k][j + 1] = tmp;
                }
            }
        }
    }
}

void sort_array_by_raw(int **a) {
    for (int i = 0; i < R; i++) {
        printf_s("\n\t");
        for (int j = 0; j < C; j++) {
            printf_s("%4d", a[i][j]);
        }
    }
}

void print_array(int *array) {
    for (int i = 0; i < C; i++)
        printf_s("%4d", array[i]);
}
