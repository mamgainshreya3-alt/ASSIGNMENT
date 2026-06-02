#include<stdio.h>
int main(){
    int n,a,rev = 0;
    printf("enter the number");
    scanf("%d", &n);
    while(n != 0) {
        a = n % 10;
        rev = rev * 10 + a;
        n = n/10;
    }
    printf("%d", rev);
    return 0;
}