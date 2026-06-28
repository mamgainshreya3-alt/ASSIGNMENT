#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for(int i = 0; i < n; i++) {
        printf("Enter Roll No, Name and Marks: ");
        scanf("%d%s%f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("Student Details\n");
    for(int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}