#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    strlwr(str);
    printf("Lowercase String = %s", str);
    return 0;
}