#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word[100], largest[100];
    int i = 0, j = 0, max = 0;
    printf("Enter string: ");
    gets(str);
    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        }
        else {
            word[j] = '\0';
            if(strlen(word) > max) {
                max = strlen(word);
                strcpy(largest, word);
            }
            j = 0;
        }
        if(str[i] == '\0') {
            break;
        }
        i++;
    }
    printf("Largest Word = %s", largest);
    return 0;
}