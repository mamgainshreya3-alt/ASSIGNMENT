#include <stdio.h>
int main(){
    int i,n, a= 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for( i = 2; i <= n; i++){
        while(n % i == 0){
            a = i;
            n = n / i;
        }
    }
    printf("Largest Prime Factor = %d", a);
    return 0;
}