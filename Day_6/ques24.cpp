#include <stdio.h>
int main(){
    int a, n;
    long long result = 1;
    printf("Enter base and exponent: ");
    scanf("%d%d", &a, &n);
    for(int i = 1; i <= n; i++){
        result = result * a;
    }
    printf("Result = %lld", result);
    return 0;
}