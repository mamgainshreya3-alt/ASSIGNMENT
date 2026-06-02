#include <stdio.h>
int main(){
    int n, prod = 1, a;
    printf("enter a number");
    scanf("%d", &n);
    while (n > 0){
        a = n % 10;
        prod = prod * a;
        n = n / 10;
    }
    printf("%d",prod);
    return 0;
}