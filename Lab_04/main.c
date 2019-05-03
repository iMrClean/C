#include <stdio.h>
#include "functions.h"

/*
 * Лабораторная работа №4
 *
 * Вывести в консоль все взаимно простые числа из заданного диапазона ряда натуральных чисел.
 */
int main() {
    int first_number, last_number;

    printf_s("\n %s \n", "Input first number: ");
    scanf("%d", &first_number);
    printf_s("\n %s \n", "Input last number: ");
    scanf("%d", &last_number);

    prime_numbers(first_number, last_number);

    return 0;
}