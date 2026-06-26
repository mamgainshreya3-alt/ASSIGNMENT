#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("file.txt", "a");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }
    printf("Enter text: ");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    printf("Data appended successfully");
    return 0;
}