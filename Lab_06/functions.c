#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


void random_array(int *array) {
    for (int i = 0; i < N; i++) {
        array[i] = rand() % RANGE;
        printf_s("%2d", array[i]);
    }
}

void sorted_array(int *a) {
    int tmp;

    for (int i = 0; i < (N - 1); i++) {
        for (int j = 0; j < (N - 1) - i; j++) {
            if (a[j] % 2 != 0) {
                continue;
            }
            if (a[j] % 2 == 0) {
                for (int t = 1; t < (N - i - j); t++) {
                    if (a[j + t] % 2 == 0) {
                        if (a[j] > a[j + t]) {
                            tmp = a[j];
                            a[j] = a[j + t];
                            a[j + t] = tmp;
                        }
                        t = N - i - j;
                    }
                }
            }
        }
    }
}