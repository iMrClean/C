#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void random_array(int *array) {
    for (int i = 0; i < N; i++) {
        array[i] = rand() % RANGE;
        printf("%2d", array[i]);
    }
}

int sorted_array(const int *arrayA, const int *arrayB, int *arrayC, int count) {
    int k = 0;
    int flag = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arrayA[i] == arrayB[j]) {
                flag = 1;
            }
        }
        if (flag) {
            arrayC[k] = arrayA[i];
            k++;
            count++;
        }
    }

    return count;
}

void print_result(int *c, int count) {
    for (int k = 0; k < count; k++) {
        printf_s("%2d", c[k]);
    }
}