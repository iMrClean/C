#include <math.h>

int factorial(int fac) {
    if (fac == 0) {
        return 0;
    }
    int step = 1, sum = 1;
    while (step <= fac) {
        sum *= fac;
        step++;
    }
    return fac;
}

double result(double sum, double fraction, int eps, int step, int x) {
    while (step <= eps) {
        fraction = pow(x, 2 * step);
        fraction /= factorial(2 * step);
        if (step % 2 != 0) {
            fraction *= -1;
        }
        sum += fraction;

        step++;
    }
    return sum;
}
