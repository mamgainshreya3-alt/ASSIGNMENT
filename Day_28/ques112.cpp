#include <stdio.h>
struct Student {
    int roll;
    char name[50];
};
int main() {
    struct Student s;
    struct Student *ptr = &s;
    printf("Enter Roll No and Name: ");
    scanf("%d%s", &ptr->roll, ptr->name);
    printf("Roll No = %d\n", ptr->roll);
    printf("Name = %s", ptr->name);
    return 0;
}