#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

void left(int a[], int N) {
    int temp = a[0];
    for (int i = 0; i < N - 1; i++) {
        a[i] = a[i + 1];
    }
    a[N - 1] = temp;
}

void right(int a[], int N) {
    N = N - 1;
    int temp = a[N - 1];
    for (int i = N - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

void random_array(int *array) {
    int num;
    int flag;

    for (int i = 0; i < N;) {
        num = rand() % 10;
        flag = 0;
        for (int j = 0; j < N; j++) {
            if (num == array[j]) {
                flag = 1;
            }

        }
        if (flag == 0) {
            array[i] = num;
            i++;
        }
    }
}

int get_min_value(const int *array, int min) {
    min = array[0];
    for (int i = 0; i < N; i++) {
        if (array[i] < min){
            min = array[i];
        }
    }

    return min;
}

int get_max_value(const int *array, int max) {
    max = array[0];
    for (int i = 0; i < N; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void print_array(int *array) {
    for (int i = 0; i < N; i++) {
        printf("%2d", array[i]);
    }
}

void left_shift(int *array, int min) {
    int flag = 0;
    while (flag == 0) {
        left(&array[0], N);
        if (array[0] == min) {
            flag = 1;
        }
    }
}

void right_shift(int *array, int max) {
    int flag = 0;
    while (flag == 0) {
        right(&array[1], N);
        if (array[N - 1] == max) {
            flag = 1;
        }
    }
}