#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int a[n][n],i,j;
    printf("Enter matrix:");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        sum = sum+a[i][i];
    }
    printf("Sum of Diagonal Elements = %d", sum);
    return 0;
}