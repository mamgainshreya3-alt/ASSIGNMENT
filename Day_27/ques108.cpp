#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    int roll, found = 0;
    fp = fopen("student.txt", "r");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    while(fscanf(fp, "%d%s%f", &s.roll, s.name, &s.marks) != EOF) {
        if(s.roll == roll) {
            printf("Roll No = %d\n", s.roll);
            printf("Name = %s\n", s.name);
            printf("Marks = %.2f", s.marks);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Record not found");
    }
    fclose(fp);
    return 0;
}