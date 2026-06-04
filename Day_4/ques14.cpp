#include <stdio.h>
int main(){
    int i,n,a=0,b=1,c;
    printf("Enter term number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%dth Fibonacci term = %d", n, a);
    return 0;
}