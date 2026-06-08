#include <stdio.h>
int main(){
    int n;
    char c;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(c = 'A'; c < 'A' + i; c++){
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}