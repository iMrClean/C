#ifndef LAB_18_DATABASE_H
#define LAB_18_DATABASE_H
typedef struct Employee {
    int id;
    char name[20];
    char surname[20];
    int birthday;
    int salary;
} Employee;

Employee *create_employee(int *n);

void fill_employee(Employee *employee, int *n);

void show_employees(Employee *employee, int *n);

void show_employee(Employee *database, const int *n);

void delete_employee(Employee *employee);

void sort_employee(Employee *employee, int *n);

int compare_by_id(const void *a, const void *b);

int compare_by_name(const void *a, const void *b);

int compare_by_surname(const void *a, const void *b);

int compare_by_birthday(const void *a, const void *b);

int compare_by_salary(const void *a, const void *b);

#endif //LAB_18_DATABASE_H
