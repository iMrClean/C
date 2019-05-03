#ifndef LAB_11_FUNCTIONS_H
#define LAB_11_FUNCTIONS_H
extern const int N;
extern const unsigned short RANGE;

void random_array(int **array);

void print_array(int **array);

int min_element(int **array, int min);

int max_element(int **array, int min);

void change(int **array, int max, int min);

#endif //LAB_11_FUNCTIONS_H
