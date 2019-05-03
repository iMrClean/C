#include <stdio.h>
#include "functions.h"

/*
 * Лабораторная работа №3.
 *
 * Для заданного диапазона [n m] вывести в консоль все числа являющиеся палиндромами
 */
int main() {
    int n, m;

    printf_s("\n %s \n", "Input n, m");
    scanf("%d %d", &n, &m);

    while (n <= m) {
        if (n == palindrome(n)) {
            printf_s("%d\n", n);
        }
        n++;
    }

    return 0;
}