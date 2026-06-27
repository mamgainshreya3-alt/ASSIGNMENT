#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    fp = fopen("student.txt", "w");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }
    printf("Enter Roll No, Name and Marks: ");
    scanf("%d%s%f", &s.roll, s.name, &s.marks);
    fprintf(fp, "%d %s %.2f", s.roll, s.name, s.marks);
    fclose(fp);
    printf("Record saved successfully");
    return 0;
}