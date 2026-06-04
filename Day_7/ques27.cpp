#include <stdio.h>
int sd(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sd(n / 10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sd(n));
    return 0;
}