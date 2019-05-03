#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void print_array(int **array) {
    for (int i = 0; i < N; i++) {
        printf_s("\n\t");
        for (int j = 0; j < N; j++) {
            printf_s("%2d", array[i][j]);
        }
    }
}

void random_array(int **array) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            array[i][j] = rand() % 10;
        }
    }
}

void sort_array(int **array) {
    int t, swap = 1;
    while (swap != 0) {
        swap = 0;
        for (int j = 0; j < N; j++) {
            for (int i = 0; i < N; i++) {
                if (i == N - 1) {
                    if ((j != N - 1)) {
                        if (array[i][j] > array[0][j + 1]) {
                            t = array[i][j];
                            array[i][j] = array[0][j + 1];
                            array[0][j + 1] = t;
                            swap++;
                        }
                    }
                } else {
                    if (array[i][j] > array[i + 1][j]) {
                        t = array[i][j];
                        array[i][j] = array[i + 1][j];
                        array[i + 1][j] = t;
                        swap++;
                    }
                }
            }
        }
    }
}