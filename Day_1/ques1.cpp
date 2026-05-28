#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf ("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum= sum +i;
    }
    printf("the sum of the %d terms is %d",n,sum);
    return 0;
}