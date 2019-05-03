#include <conio.h>
#include <malloc.h>
#include <stdio.h>
#include <mem.h>
#include <ctype.h>
#include "functions.h"

/*
 * Лабораторная работа №16
 *
 * Слово - непрерывный последовательный алфавит символов.
 * Выделение слов в строке.
 * Есть строка которая содержит несколько слов и слова отделены символами, разделенными пробелами. В начале и конце могут быть пробелы.
 * По содержимому строки нужно сформировать массив слов и отсортировать его в алфавитном порядке.
 */
const int N = 1024;

int main() {
    //Input string from console
    char *str_input = malloc(sizeof(int) * N);
    int words_num;

    printf_s("\n\tTask:");
    printf_s("\n\t1. Parse a string and pop words separated with spaces.");
    printf_s("\n\t2. Sort the array of pointers on words in alphabetical order.\n\t");

    printf_s("\n\tPlease input string: ");
    gets(str_input);
    printf_s("\n\tYour input: \"");
    fputs(str_input, stdout);
    printf_s("\"\n");

    //Form new string from inputted one without any spaces
    //At the beginning and in the end of string
    printf_s("\n\tDeleting trailing, leading and duplicating spaces\n");

    //1. Delete leading spaces
    delete_leading_spaces(str_input);

    //2. Delete trailing spaces
    delete_trailing_spaces(str_input);

    //3. Delete duplicating spaces
    delete_duplicating_spaces(str_input);

    printf_s("\n\tAdjusted string on spaces: \"");
    fputs(str_input, stdout);
    printf_s("\"\n");

    //Number of words
    words_num = get_number_of_words(str_input);
    printf_s("\n\tNumber of words: %d", words_num);

    //Array of pointers on words
    //Change spaces on '\0' in order to separate words
    char **p_words = (char **) calloc(words_num, sizeof(char *));
    separate_words(p_words, str_input);

    printf_s("\n\n\tPrinting words:");
    print_words(p_words, words_num);

    //Sorting the array of pointers on words in alphabetical order
    printf_s("\n\n\tPrinting sorted:");
    sort_array(p_words, words_num);
    print_words(p_words, words_num);

    free((void *) p_words[0]);
    free((void *) p_words);
    free(str_input);
    return 0;
}