#include <stdio.h>
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int f1 = 0, f2 = 1, f3;
    for(int i = 2; i <= n; i++){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f2;
}

int main(){
    int n;
    printf("Enter term number");
    scanf("%d", &n);
    printf("Fibonacci Term = %d", fibonacci(n));
    return 0;
}