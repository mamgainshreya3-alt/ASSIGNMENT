#include <stdio.h>
int main() {
    char str[100];
    int digits = 0, alphabets = 0, special = 0;
    printf("Enter string: ");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d", special);
    return 0;
}