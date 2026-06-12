#include <stdio.h>
int palindrome(int n){
    int temp = n, rev = 0, a;
    while(n != 0){
        a = n % 10;
        rev = rev * 10 + a;
        n =n/10;
    }
    return temp == rev;
}

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if(palindrome(n)){
        printf("Palindrome Number");
    }
    else{
        printf("Not a Palindrome Number");
    }
    return 0;
}