#include<stdio.h>
int main(){
    int i,n,a,count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a = n%10;
        n = n/10;
        count++;
    }
    printf("the number of digits is %d",count);
    return 0;
}