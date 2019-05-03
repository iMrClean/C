#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void random_array(int *array) {
    for (int i = 0; i < N; i++) {
        array[i] = rand() % RANGE;
        printf_s("%2d", array[i]);
    }
}

int no_repeats_array(const int *a, int *b, int count) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (b[j] == a[i])
                break;
            if (j == i)
                b[count++] = a[i];
        }
    }

    return count;
}