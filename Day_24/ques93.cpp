#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter string: ");
    gets(str);
    printf("String without spaces = ");
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    return 0;
}