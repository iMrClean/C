#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include "funstions.h"
#include "database.h"

void start_program() {
    printf_s("\n\tTask: Create dictionary database program with menu.");
    printf("\n\n\tDatabase\n");

    int menu_option = -1;
    int flag = 0;
    int n = 0;
    Dictionary *database = NULL;

    print_menu();
    while (menu_option) {

        printf_s("\n\tPlease make input (-1 for menu) >> ");
        menu_option = choose_menu();

        switch (menu_option) {
            case -1: {
                print_menu();
                break;
            }
            case 0: {
                printf("\n\tBye-bye!\n\t");
                break;
            }
            case 1: {
                database = create_dictionary(&n);
                flag = 1;
                break;
            }
            case 2: {
                if (flag) {
                    fill_dictionary(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 3: {
                if (flag) {
                    show_dictionaries(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 4: {
                if (flag) {
                    delete_dictionary(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 5: {
                if (flag) {
                    sort_dictionary(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 6: {
                if (flag) {
                    show_word(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            default:
                printf("\n\tPlease make correct input!\n\t");
        }
    }
}

void print_menu() {
    printf_s("\n\tMenu options:");
    printf_s("\n\t1 - Initialize with max number of dictionaries");
    printf_s("\n\t2 - Fill dictionary");
    printf_s("\n\t3 - Show dictionary");
    printf_s("\n\t4 - Delete dictionary");
    printf_s("\n\t5 - Sort dictionary");
    printf_s("\n\t6 - Find dictionary");
    printf_s("\n\t0 - Exit\n");
}

int choose_menu() {
    int menu_option = 0;
    scanf("%d", &menu_option);
    return menu_option;
}

void print_error() {
    printf_s("\n\tYou haven't initialised the dictionary database yet!\n\t");
}