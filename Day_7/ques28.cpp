#include <stdio.h>
int a = 0;
int reverse(int n){
    if(n == 0){
        return a;
    }
    a = a * 10 + n % 10;
    return reverse(n / 10);
}

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("Reversed number = %d", reverse(n));
    return 0;
}