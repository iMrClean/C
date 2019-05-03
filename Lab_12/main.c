#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"

/*
 * Лабораторная работа №12
 *
 * Дан динамический одномерный массив наполненный целыми неповторяющимися элементами.
 * Написать программу которая:
 * а) Путем циклического сдвига массива влево преобразует массив так, чтобы минимальный элемент оказался на первом месте
 * б) Путем циклического сдвига массива влево преобразует массив так, чтобы максимальный элемент оказался на последнем месте
 * в) Вывести исходный и результирующий массивы.
 */
const int N = 10;

int main() {
    int *array = NULL;

    int min = 0, max = 0;

    array = (int *) malloc(N * sizeof(int));
    srand((unsigned) time(NULL));

    random_array(array);
    min = get_min_value(array, min);
    max = get_max_value(array, max);

    printf_s("\n\tInitial Array\n\t");
    print_array(array);

    printf_s("\n\tmin=%d\tmax=%d\n\t", min, max);
    left_shift(array, min);
    printf_s("\n\tLeft Shift Min Element Array\n\t");
    print_array(array);

    right_shift(array, max);

    printf_s("\n\tRight Shift Max Element Array\n\t");
    print_array(array);

    free(array);
    return 0;
}