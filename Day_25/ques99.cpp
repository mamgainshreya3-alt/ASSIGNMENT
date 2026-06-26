#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    int n = strlen(str);
    for(int i = 0; i < n; i++) {
        int count = 1;
        if(str[i] == '\0') {
            continue;
        }
        for(int j = i + 1; j < n; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }
        printf("%c = %d\n", str[i], count);
    }
    return 0;
}