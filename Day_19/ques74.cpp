#include <stdio.h>
int main() {
    int a, b;
    printf("Enter rows and columns: ");
    scanf("%d%d", &a, &b);
    int matrix1[a][b], matrix2[a][b], i, j;
    printf("Enter first matrix:\n");
    for(i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            matrix1[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("Subtraction Matrix:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}