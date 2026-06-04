#include<stdio.h>
int fib(int);
int main(){
    int i,n;
    printf("Enter the number of terms to be printed");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(i=0; i<=n-1; i++){
        printf("%d ", fib(i));
    }
    return 0;
}
int fib(int i){
    if(i == 0){
        return 0;
    }
    else if(i == 1){
        return 1;
    }
    else{
        return fib(i-1) + fib(i-2);
    }
}