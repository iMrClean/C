#ifndef LAB_08_FUNCTIONS_H
#define LAB_08_FUNCTIONS_H

extern const int N;
extern const unsigned short RANGE;

void random_array(int *array);

void print_array(int *array);

void print_array_count(int *array, int size);

int new_array(const int *a, const int *b, int *c, int count);

int unique_array(int *arr, int size);

void sort_array(int *array, int count);

#endif //LAB_08_FUNCTIONS_H
