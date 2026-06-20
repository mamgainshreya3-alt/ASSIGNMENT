#include <stdio.h>
int main() {
    int n, flag = 1;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int a[n][n],i,j;
    printf("Enter matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
            }
        }
    }
    if(flag == 1) {
        printf("Matrix is Symmetric");
    }
    else {
        printf("Matrix is not Symmetric");
    }
    return 0;
}