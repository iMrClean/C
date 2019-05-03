#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void random_matrix(int **array, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            array[i][j] = rand() % 100;
        }
    }
}

void print_matrix(int **array, int col, int raw) {
    for (int i = 0; i < col; i++) {
        printf_s("\n\t");
        for (int j = 0; j < raw; j++)
            printf_s("%4d", array[i][j]);

    }
}

void transpose_matrix(int **arrayA, int **arrayB, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            arrayB[j][i] = arrayA[i][j];
    }
}
