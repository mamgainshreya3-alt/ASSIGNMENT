#include <stdio.h>
int main(){
    int n, temp, rev = 0, a;
    printf("enter the number");
    scanf("%d", &n);
    temp = n;
    while(n>0){
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }
    if (temp == rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}