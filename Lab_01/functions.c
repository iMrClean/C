#include <math.h>

double area(double S, double P) {
    return S / P;
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double semi_perimeter(double P) {
    return P / 2;
}

double square(double p, double a, double b, double c) {
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
