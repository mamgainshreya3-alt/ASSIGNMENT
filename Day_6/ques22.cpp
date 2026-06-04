#include <stdio.h>
int main(){
    int b,d = 0,c = 1,a;
    printf("Enter a binary number");
    scanf("%d", &b);
    while(b > 0){
        a = b % 10;
        d = d + a * c;
        b = b / 10;
        c = c * 2;
    }
    printf("Decimal = %d", d);
    return 0;
}