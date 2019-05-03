#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>

/*
 * Лабораторная работа №8
 * Даны массивы A и B записанные случайными числами.
 * По содержимому этих двух массивов сформировать массив С.
 * Он не должен содержать повторяющихся элементов, должен быть отсортирован по возврастанию.
 * При формировании массива использовать метод линейного поиска.
 * Вывести три массива.
 */
const int N = 5;
const unsigned short RANGE = 10;

int main() {
    srand((unsigned) time(NULL));
    int *a = malloc(sizeof(int) * N);
    int *b = malloc(sizeof(int) * N);
    int *c = malloc(sizeof(int) * N * 2);
    int size = 0;

    printf_s("\n\tInitial array A:\n\t");
    random_array(a);
    print_array(a);

    printf_s("\n\tInitial array B:\n\t");
    random_array(b);
    print_array(b);

    size = new_array(a, b, c, size);
    sort_array(c, size);
    size = unique_array(c, size);

    printf_s("\n\tInitial array C:\n\t");
    print_array_count(c, size);

    free(c);
    free(a);
    free(b);
    return 0;
}