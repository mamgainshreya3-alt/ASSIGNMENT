#include <stdio.h>
int main() {
    int a,b,n,i,flag;
    printf("enter the range");
    scanf("%d%d",&a,&b);
    for(int n = a; n <= b; n++) {
        flag = 1;
        if(n <= 1)
            flag = 0;
        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d ", n);
    }
    return 0;
}