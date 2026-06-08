#include <stdio.h>
void star(int n){
    if (n == 0){
        return;
    }
    printf("*");
    star(n - 1);
}
void pattern(int r, int n){
    if (r > n){
        return;
    }
    star(r);
    printf("\n");
    pattern(r + 1, n);
}
int main(){
    int n;
    printf("Enter number of rows");
    scanf("%d", &n);
    pattern(1, n);
    return 0;
}