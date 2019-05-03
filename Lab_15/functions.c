#include <stdio.h>
#include <stdlib.h>

void random_array(int **array, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            array[i][j] = rand() % 10;
        }
    }
}

void print_array_sum(int **ptr, int r, int c) {
    printf_s("\n\t");
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            printf_s("%4d", ptr[i][j]);
            sum += ptr[i][j];
        }
        printf("   -%4d\n\t", sum);
    }
}

int mark_exceeded_rows(int **array, int r, int c, int limit, int *flag) {
    int exc_limit = 0;
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += array[i][j];
        }
        if (sum > limit) {
            exc_limit++;
            flag[i] = 1;
        } else {
            flag[i] = 0;
        }
    }

    return exc_limit;
}

void check_array(int **new_array, int **array, int r, int c, int exc_limit, const int *flag) {
    if (exc_limit > 0) {
        //Allocating memory for new array if there are new zero rows
        int r_new = r + exc_limit;
        new_array = (int **) calloc(r_new, sizeof(int *));
        new_array[0] = (int *) calloc(r_new * c, sizeof(int));
        for (int i = 1; i < r_new; i++) {
            new_array[i] = new_array[i - 1] + c;
        }
        //New array with zero rows
        int cnt = 0;
        for (int i = 0; i < r; i++) {
            if (flag[i] == 1) {
                for (int j = 0; j < c; j++) {
                    new_array[cnt][j] = array[i][j];
                    new_array[cnt + 1][j] = 0;
                }
                cnt += 2;
            } else {
                for (int j = 0; j < c; j++)
                    new_array[cnt][j] = array[i][j];
                cnt++;
            }
        }

        printf("\n\tNew array:");
        print_array_sum(new_array, r_new, c);

        free(new_array[0]);
        free(new_array);
    } else {
        printf("\n\tNo rows with exceeded sum!");
    }
}