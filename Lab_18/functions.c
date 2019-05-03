#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include "functions.h"
#include "database.h"

void start_program() {
    printf_s("\n\tTask: Create employee database program with menu.");
    printf_s("\n\n\tDatabase\n");

    int menu_option = -1;
    int flag = 0;
    int n = 0;
    Employee *database = NULL;

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
                printf_s("\n\tBye-bye!\n\t");
                break;
            }
            case 1: {
                if (database == NULL) {
                    database = create_employee(&n);
                } else {
                    printf_s("\n\tYou must delete old database before create new!\n\t");
                }
                flag = 1;
                break;
            }
            case 2: {
                if (flag) {
                    fill_employee(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 3: {
                if (flag) {
                    show_employees(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 4: {
                if (flag) {
                    delete_employee(database);
                } else {
                    print_error();
                }
                break;
            }
            case 5: {
                if (flag) {
                    sort_employee(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            case 6: {
                if (flag) {
                    show_employee(database, &n);
                } else {
                    print_error();
                }
                break;
            }
            default:
                printf_s("\n\tPlease make correct input!\n\t");
        }
    }
}


void print_menu() {
    printf_s("\n\tMenu options:");
    printf_s("\n\t1 - Initialize with max number of employees");
    printf_s("\n\t2 - Fill employee ");
    printf_s("\n\t3 - Show employees");
    printf_s("\n\t4 - Delete employee");
    printf_s("\n\t5 - Sort employee");
    printf_s("\n\t6 - Find employee");
    printf_s("\n\t0 - Exit\n");
}

int choose_menu() {
    int menu_option = 0;
    scanf("%d", &menu_option);
    return menu_option;
}

void print_error() {
    printf_s("\n\tYou haven't initialised the employee database yet!\n\t");
}
