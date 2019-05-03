#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

/*
 * Лабораторная работа №15
 *
 * Дан динамический двумерный массив заполненный случайными элементами.
 * Добавлять в двумерный динамический массив строки состоящие из нулей после которой строки сумма элементов которой больше числа заданной пользователем.
 *
 */
int main() {
    srand((unsigned) time(NULL));
    int **array = NULL, **new_array = NULL;
    int *flag = NULL;
    int r = 0, c = 0;
    int exc_limit = 0;
    int limit = 0;

    printf_s("\n\t1. Create dynamic random integer array.");
    printf_s("\n\t2. Input number.");
    printf_s("\n\t3. If the row sum is bigger then the inputted number,");
    printf_s("\n\t   insert zero row after that row in the new array.\n");

    printf_s("\n\tInput number of rows and columns: ");
    scanf("%d %d", &r, &c);

    //Allocating memory for initial array
    array = (int **) calloc(r, sizeof(int *));
    array[0] = (int *) calloc(r * c, sizeof(int));
    for (int i = 1; i < r; i++) {
        array[i] = array[i - 1] + c;
    }

    random_array(array, r, c);
    printf_s("\n\tInitial random array:");
    print_array_sum(array, r, c);

    printf_s("\n\tInput limit: ");
    scanf("%d", &limit);

    //Allocating memory for flag array
    flag = (int *) calloc(r, sizeof(int *));
    //Marking the exceeded rows
    exc_limit = mark_exceeded_rows(array, r, c, limit, flag);
    //Check on new rows
    check_array(new_array, array, r, c, exc_limit, flag);

    //Deallocate the memory
    free(array[0]);
    free(array);
    free(flag);
    return 0;
}
