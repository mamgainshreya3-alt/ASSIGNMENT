#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not Anagrams");
        return 0;
    }
    int n = strlen(str1);
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if(str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    if(strcmp(str1, str2) == 0) {
        printf("Strings are Anagrams");
    }
    else {
        printf("Strings are not Anagrams");
    }
    return 0;
}