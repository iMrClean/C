#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

/*
 * Лабораторная работа №9
 *
 * Даны два массива(A, B) заданными случайными неповторяющимися элементы.
 * По содержимому этих двух массивов сформировать третий массив C, содержащий в себе элементы A и B
 * При формировании массива C использовать метод двоичного поиска.
 * Вывести 3 массива в консоль.
 */
const int N = 5;
const unsigned short RANGE = 10;


int main() {
    srand((unsigned) time(NULL));
    int *a = malloc(sizeof(int) * N);
    int *b = malloc(sizeof(int) * N);
    int *c = malloc(sizeof(int) * N);
    int count = 0;

    printf_s("\n\tInitial array A:\n\t");
    random_array(a);
    printf_s("\n\tInitial array B:\n\t");
    random_array(b);
    printf_s("\n\tInitial array C:\n\t");
    count = sorted_array(a, b, c, count);
    print_result(c, count);

    free(c);
    free(b);
    free(a);
    return 0;
}