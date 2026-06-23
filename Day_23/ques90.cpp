#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    strupr(str);
    printf("Uppercase String = %s", str);
    return 0;
}