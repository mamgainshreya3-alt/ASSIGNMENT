#include <stdio.h>
int main(){
    int n, f1 = 0, f2 = 1, f3;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    for(int i = 1; i <= n; i++){
        printf("%d ", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return 0;
}