#include <stdio.h>
#include "functions.h"
/*
 * Лабораторная работа №1.
 *
 * Ввести 3 точки треугольника с консоли.
 * Вычислить длины сторон, периметр, площадь, радиус вписанной окружности.
 */

int main() {
    double a, b, c;
    double P, S, p, R;

    printf_s("\n %s", "Input a,b,c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    P = perimeter(a, b, c);
    p = semi_perimeter(P);
    S = square(p, a, b, c);
    R = area(S, P);

    printf_s("\n %s %5.2lf %c %5.2lf %c %5.2lf", "Side lengths: ", a, ',', b, ',', c);
    printf_s("\n %s %5.2lf", "Perimeter: ", P);
    printf_s("\n %s %5.2lf", "Area: ", S);
    printf_s("\n %s %5.2lf", "R inscribed circle: ", R);

    return 0;
}