#ifndef LAB_15_FUNCTIONS_H
#define LAB_15_FUNCTIONS_H

void random_array(int **array, int r, int c);

void print_array_sum(int **ptr, int r, int c);

int mark_exceeded_rows(int **array, int r, int c, int limit, int *flag);

void check_array(int **new_array, int **array, int r, int c, int exc_limit, const int *flag);

#endif //LAB_15_FUNCTIONS_H
