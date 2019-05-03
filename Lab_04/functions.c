#include <stdio.h>

void prime_numbers(int first_number, int last_number) {
    int flag;

    for (int i = first_number; i < last_number; i++) {
        flag = -1;
        for (int j = 2; j <= i / 2; j++) {
            if (!(i % j)) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf_s("\t%d", i);
        }
    }
}