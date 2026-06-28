#include <stdio.h>
struct Student {
    int roll;
    char name[50];
};
void display(struct Student s) {
    printf("Roll No = %d\n", s.roll);
    printf("Name = %s", s.name);
}
int main() {
    struct Student s;
    printf("Enter Roll No and Name: ");
    scanf("%d%s", &s.roll, s.name);
    display(s);
    return 0;
}