#include <stdio.h>
int main(){
    int n, temp, a, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0){
        a = n % 10;
        int fact = 1;
        for(int i = 1; i <= a; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == temp){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
    return 0;
}