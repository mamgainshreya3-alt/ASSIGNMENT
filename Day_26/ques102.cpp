#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("file.txt", "r");
    if(fp == NULL) {
        printf("File not found");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF) {
        if(ch == '\n') {
            count++;
        }
    }
    fclose(fp);
    printf("Number of lines = %d", count + 1);
    return 0;
}