#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp[100];
    printf("Enter string: ");
    gets(str);
    strcpy(temp, str);
    strrev(temp);
    if(strcmp(str, temp) == 0) {
        printf("Palindrome String");
    }
    else {
        printf("Not a Palindrome String");
    }
    return 0;
}