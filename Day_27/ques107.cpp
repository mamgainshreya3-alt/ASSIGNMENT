#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    fp = fopen("student.txt", "r");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }
    fscanf(fp, "%d%s%f", &s.roll, s.name, &s.marks);
    printf("Roll No = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f", s.marks);
    fclose(fp);
    return 0;
}