#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "functions.h"

/*
 * Лабораторная работа №5
 *
 * Мини игра попади в мишень.
 * 1.Мишень M N
 * 2.Запрос x и y
 * 3.Закончить или продолжить
 */
const int M = 10;
const int N = 10;
const int RANGE = 5;

int main() {
    int x, y;
    srand((unsigned) time(NULL));

    for (;;) {
        printf_s("Input x = ");
        scanf("%d", &x);
        printf_s("Input y = ");
        scanf("%d", &y);
        printf_s("\n");
        if (x == 0 || y == 0) {
            break;
        }
        start_game(x, y);
    }

    return 0;
}