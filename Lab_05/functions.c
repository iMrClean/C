#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void start_game(int x, int y) {
    int xm = rand() % RANGE;
    int ym = rand() % RANGE;

    printf_s("\tCoordinate of the target x = %d\n", xm);
    printf_s("\tCoordinate of the target y = %d\n\n", ym);

    if ((x <= xm) || (x >= (xm + M)) || (y >= (ym + N))) {
        printf_s("\tMiss\n\n");
    } else {
        printf_s("\tHit\n\n");
    }
}