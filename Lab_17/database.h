#ifndef LAB_17_DATABASE_H
#define LAB_17_DATABASE_H

typedef struct Dictionary {
    int id;
    char word[20];
} Dictionary;

Dictionary *create_dictionary(int *n);

void fill_dictionary(Dictionary *dictionary, int *n);

void show_dictionaries(Dictionary *dictionary, int *n);

void delete_dictionary(Dictionary *dictionary);

void sort_dictionary(Dictionary *dictionary, int *n);

void show_word(Dictionary *database, const int *n);

int compare_by_id(const void *a, const void *b);

int compare_by_name(const void *a, const void *b);

#endif //LAB_17_DATABASE_H
