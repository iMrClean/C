#include <stdio.h>
#include "functions.h"

/*
 * Лабораторная работа №2.

 * Написать сумму ряда S(x) с заданной точностью(eps) для заданного значения аргумента(х).
 * S(x) = 1 - ((x^2))/2!) + ((x^4))/4!) - ((x^6))/6!) + ...
 *
 */
int main() {
    double sum = 1.0, fraction = 0;
    int eps, step = 1, x;

    printf_s("\n eps= ");
    scanf("%d", &eps);
    printf_s("\n x= ");
    scanf("%d", &x);

    sum = result(sum, fraction, eps, step, x);
    printf_s("\n%.3f", sum);

    return 0;
}