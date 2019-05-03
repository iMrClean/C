#ifndef LAB_16_FUNCTIONS_H
#define LAB_16_FUNCTIONS_H

void delete_leading_spaces(char *str_input);

void delete_trailing_spaces(char *str_input);

void delete_duplicating_spaces(char *str_input);

int get_number_of_words(char *str_input);

void separate_words(char **p_words, char *str_input);

void print_words(char **p_words, int words_num);

void sort_array(char **p_words, int words_num);

#endif //LAB_16_FUNCTIONS_H
