#ifndef LAB_12_FUNCTIONS_H
#define LAB_12_FUNCTIONS_H
extern const int N;

void left(int a[], int N);

void right(int a[], int N);

void left_shift(int *array,int min);

void right_shift(int *array, int max);

void random_array(int *array);

int get_min_value(const int *array, int min);

int get_max_value(const int *array, int max);

void print_array(int *array);

#endif //LAB_12_FUNCTIONS_H
