#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

void random_array(int **array) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            array[i][j] = rand() % RANGE;
        }
    }
}

void print_array(int **array) {
    for (int i = 0; i < N; i++) {
        printf_s("\n\t");
        for (int j = 0; j < N; j++) {
            if (i != j) {
                printf_s("%4d", array[i][j]);
            } else {
                printf_s("%4c", '\\');
            }
        }
    }
}

int min_element(int **array, int min) {
    min = array[0][1];
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            if (array[i][j] < min)
                min = array[i][j];
        }
    }
    return min;
}

int max_element(int **array, int max) {
    max = array[1][0];
    for (int i = 2; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (array[i][j] > max)
                max = array[i][j];
        }
    }
}

void change(int **array,  int max, int min) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (array[i][j] % 2 == 0) {
                array[i][j] = max;
            } else {
                array[i][j] = min;
            }
        }
    }
}