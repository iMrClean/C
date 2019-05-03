#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void random_array(int *array) {
    for (int i = 0; i < N; i++) {
        array[i] = (rand() % RANGE);
    }
}

void print_array(int *array) {
    for (int i = 0; i < N; i++) {
        printf_s("%2d", array[i]);
    }
}

void print_array_count(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf_s("%2d", array[i]);
    }
}

int new_array(const int *a, const int *b, int *c, int size) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                c[size++] = a[i];
                c[size++] = b[j];
            }
        }
    }

    return size;
}

int unique_array(int *arr, int size) {
    int k;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                arr[k] = 0;
                size -= 1;

                if (arr[i] == arr[j]) {
                    j--;
                }
            }
        }
    }
    return size;
}

void sort_array(int *array, int size) {
    int tmp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}