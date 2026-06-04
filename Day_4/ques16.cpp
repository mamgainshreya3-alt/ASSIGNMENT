#include <stdio.h>
int main(){
    int a, b,temp, rem, sum;
    printf("Enter starting and ending range: ");
    scanf("%d%d",&a,&b);
    printf("Armstrong Numbers are:\n");
    for(int n = a; n <= b; n++)
    {
        temp = n, rem, sum = 0;
        while(temp != 0){
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }
        if(sum == n){
            printf("%d ", n);
    }
    return 0;
}