#include <stdio.h>
int armstrong(int n){
    int temp = n, a, sum = 0;
    while(temp != 0){
        a = temp % 10;
        sum = sum+ a * a * a;
        temp = temp/10;
    }
    return sum == n;
}

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if(armstrong(n)){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    return 0;
}