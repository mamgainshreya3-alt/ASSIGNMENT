#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e;
    printf("Enter ID, Name and Salary: ");
    scanf("%d%s%f", &e.id, e.name, &e.salary);
    printf("Employee Details\n");
    printf("ID = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %.2f", e.salary);
    return 0;
}