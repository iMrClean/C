#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#include "database.h"

Employee *create_employee(int *n) {
    printf_s("\n\tPlease input max number of employees >> ");
    scanf("%d", n);

    Employee *employee = malloc(sizeof(Employee) * (*n));

    return employee;
}

void fill_employee(Employee *database, int *n) {
    printf_s("\n\tMax number of employees: %d", *n);
    printf_s("\n\n");
    for (int i = 0; i < *n; i++) {
        printf_s("\tEmployee #%d\n", i + 1);
        database[i].id = i + 1;

        printf_s("\t\tInput name: ");
        scanf("%s", database[i].name);

        printf_s("\t\tInput surname: ");
        scanf("%s", database[i].surname);

        printf_s("\t\tInput year of birth: ");
        scanf("%d", &database[i].birthday);

        printf_s("\t\tInput salary: ");
        scanf("%d", &database[i].salary);

        printf_s("\n");
    }
}

void show_employees(Employee *database, int *n) {
    for (int i = 0; i < *n; i++) {
        printf_s("\n\tEmployee #%d", database[i].id);
        printf_s("\n\t\tName: %s", database[i].name);
        printf_s("\n\t\tSurname: %s", database[i].surname);
        printf_s("\n\t\tYear of birth: %d", database[i].birthday);
        printf_s("\n\t\tSalary: %d", database[i].salary);
        printf_s("\n");
    }
}

void delete_employee(Employee *database) {
    free(database);
}

void sort_employee(Employee *database, int *n) {
    printf_s("\n\tPlease choose how to sort the database:");
    printf_s("\n\t\t- input '1' for sorting on id");
    printf_s("\n\t\t- input '2' for sorting on names");
    printf_s("\n\t\t- input '3' for sorting on surnames");
    printf_s("\n\t\t- input '4' for sorting on birthday");
    printf_s("\n\t\t- input '5' for sorting on salaries");
    printf_s("\n");
    printf_s("\n\tYour input >> ");

    int sort_option;
    scanf("%d", &sort_option);

    switch (sort_option) {
        case 1: {
            qsort(database, *n, sizeof(Employee), compare_by_id);
            printf_s("\n\tSorted by id");
            break;
        }
        case 2: {
            qsort(database, *n, sizeof(Employee), compare_by_name);
            printf_s("\n\tSorted by name");
            break;
        }
        case 3: {
            qsort(database, *n, sizeof(Employee), compare_by_surname);
            printf_s("\n\tSorted by surname");
            break;
        }
        case 4: {
            qsort(database, *n, sizeof(Employee), compare_by_birthday);
            printf_s("\n\tSorted by birthday");
            break;
        }
        case 5: {
            qsort(database, *n, sizeof(Employee), compare_by_salary);
            printf_s("\n\tSorted by salary");
            break;
        }
        default: {
            printf_s("\n\tIncorrect input!");
        }
    }
}

void show_employee(Employee *database, const int *n) {
    printf_s("\n\tInput id");
    int employee_id;
    scanf("%d", &employee_id);

    for (int i = 0; i < *n; i++) {
        if (i == employee_id - 1) {
            printf_s("\n\tEmployee #%d", database[i].id);
            printf_s("\n\t\tName: %s", database[i].name);
            printf_s("\n\t\tSurname: %s", database[i].surname);
            printf_s("\n\t\tYear of birth: %d", database[i].birthday);
            printf_s("\n\t\tSalary: %d", database[i].salary);
            printf_s("\n");
        } else {
            printf_s("\n\tNot found!");
        }
    }
}

int compare_by_id(const void *a, const void *b) {
    Employee *employeeA = (Employee *) a;
    Employee *employeeB = (Employee *) b;

    return (employeeB->id - employeeA->id);
}

int compare_by_name(const void *a, const void *b) {
    Employee *employeeA = (Employee *) a;
    Employee *employeeB = (Employee *) b;

    return (employeeB->name - employeeA->name);
}

int compare_by_surname(const void *a, const void *b) {
    Employee *employeeA = (Employee *) a;
    Employee *employeeB = (Employee *) b;

    return (employeeB->surname - employeeA->surname);
}

int compare_by_birthday(const void *a, const void *b) {
    Employee *employeeA = (Employee *) a;
    Employee *employeeB = (Employee *) b;

    return (employeeB->birthday - employeeA->birthday);
}

int compare_by_salary(const void *a, const void *b) {
    Employee *employeeA = (Employee *) a;
    Employee *employeeB = (Employee *) b;

    return (employeeB->salary - employeeA->salary);
}