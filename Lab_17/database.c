#include <mem.h>
#include <stdio.h>
#include <stdlib.h>
#include "database.h"

Dictionary *create_dictionary(int *n) {
    printf_s("\n\tPlease input max number of dictionary >> ");
    scanf("%d", n);

    Dictionary *dictionary = malloc(sizeof(Dictionary) * (*n));

    return dictionary;
}

void fill_dictionary(Dictionary *database, int *n) {
    printf_s("\n\tMax number of dictionaries: %d", *n);
    printf_s("\n\n");
    for (int i = 0; i < *n; i++) {
        printf_s("\tDictionary #%d\n", i + 1);
        database[i].id = i + 1;

        printf_s("\t\tInput word: ");
        scanf("%s", database[i].word);

        printf_s("\n");
    }
}

void show_dictionaries(Dictionary *database, int *n) {
    for (int i = 0; i < *n; i++) {
        printf_s("\n\tDictionary #%d", database[i].id);
        printf_s("\n\t\tWord: %s", database[i].word);
        printf_s("\n");
    }
}

void delete_dictionary(Dictionary *database) {
    free(database);
}

void sort_dictionary(Dictionary *database, int *n) {
    printf_s("\n\tPlease choose how to sort the database:");
    printf_s("\n\t\t- input '1' for sorting by id");
    printf_s("\n\t\t- input '2' for sorting by word");
    printf_s("\n");
    printf_s("\n\tYour input >> ");

    int sort_option;
    scanf("%d", &sort_option);

    switch (sort_option) {
        case 1: {
            qsort(database, *n, sizeof(Dictionary), compare_by_id);
            printf_s("\n\tSorted by id");
            break;
        }
        case 2: {
            qsort(database, *n, sizeof(Dictionary), compare_by_name);
            printf_s("\n\tSorted by name");
            break;
        }
        default: {
            printf_s("\n\tIncorrect input!");
        }
    }
}

void show_word(Dictionary *database, const int *n) {
    printf_s("\n\tInput id");
    int dictionary_id;
    scanf("%d", &dictionary_id);

    for (int i = 0; i < *n; i++) {
        if (i == dictionary_id - 1) {
            printf_s("\n\tDictionary #%d", database[i].id);
            printf_s("\n\t\tWord: %s", database[i].word);
            printf_s("\n");
        } else {
            printf_s("\n\tNot found!");
        }
    }
}

int compare_by_id(const void *a, const void *b) {
    Dictionary *dictionaryA = (Dictionary *) a;
    Dictionary *dictionaryB = (Dictionary *) b;

    return (dictionaryA->id - dictionaryB->id);
}

int compare_by_name(const void *a, const void *b) {
    Dictionary *dictionaryA = (Dictionary *) a;
    Dictionary *dictionaryB = (Dictionary *) b;

    return (dictionaryA->word - dictionaryB->word);
}