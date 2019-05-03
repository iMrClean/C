#include <ctype.h>
#include <mem.h>
#include <stdio.h>

void delete_leading_spaces(char *str_input) {
    if (str_input[0] == ' ') {
        int cnt_first_letter = 0;
        while (!isalnum(str_input[cnt_first_letter])) {
            cnt_first_letter++;
        }
        for (size_t i = 0; i < strlen(str_input); i++) {
            str_input[i] = str_input[i + cnt_first_letter];
        }
    }
}

void delete_trailing_spaces(char *str_input) {
    if (str_input[strlen(str_input) - 1] == ' ') {
        size_t cnt_last_letter = strlen(str_input) - 1;
        while (!isalnum(str_input[cnt_last_letter])) {
            cnt_last_letter--;
        }
        str_input[cnt_last_letter + 1] = '\0';
    }
}

void delete_duplicating_spaces(char *str_input) {
    for (size_t i = 0; i < strlen(str_input); i++) {
        if (str_input[i] == ' ') {
            size_t num_of_spaces = 0;
            size_t j = i;
            while (!isalnum(str_input[j++])) {
                num_of_spaces++;
            }
            if (num_of_spaces > 1) {
                for (size_t k = i + 1; k < strlen(str_input); k++) {
                    str_input[k] = str_input[k + num_of_spaces - 1];
                }
            }
        }
    }
}

int get_number_of_words(char *str_input) {
    int words_num = 1;

    for (int i = 0; i < strlen(str_input); i++) {
        if (str_input[i] == ' ') {
            words_num++;
        }
    }

    return words_num;
}

void separate_words(char **p_words, char *str_input) {
    size_t j = 0;
    p_words[j++] = &str_input[0];
    size_t str_input_len = strlen(str_input);
    for (int i = 0; i < str_input_len; i++) {
        if (str_input[i] == ' ') {
            p_words[j] = &str_input[i + 1];
            str_input[i] = '\0';
            j++;
        }
    }
}

void print_words(char **p_words, int words_num) {
    for (size_t i = 0; i < words_num; i++) {
        printf("\n\t%s", p_words[i]);
    }
}

void sort_array(char **p_words, int words_num) {
    for (int i = 0; i < words_num - 1; i++) {
        size_t cnt = 0;
        for (int j = 0; j < words_num - 1 - i; j++) {
            if (strcmp(p_words[j], p_words[j + 1]) > 0) {
                char *tmp = p_words[j];
                p_words[j] = p_words[j + 1];
                p_words[j + 1] = tmp;
                cnt++;
            }
        }
        if (!cnt) {
            break;
        }
    }
}