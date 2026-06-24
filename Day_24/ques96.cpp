#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    printf("Enter string: ");
    gets(str);
    int n = strlen(str),i,j;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted String = %s", str);
    return 0;
}