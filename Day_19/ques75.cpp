#include <stdio.h>
int main(){
    int a, b;
    printf("Enter rows and columns: ");
    scanf("%d%d", &a, &b);
    int matrix[a][b], i, j;
    printf("Enter matrix:");
    for(i = 0; i < a; i++){
        for( j = 0; j < b; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Transpose Matrix:");
    for(i = 0; i < b; i++){
               for(j = 0; j < a; j++){
            printf("%d ", matrix[j][i]);
               }
        printf("");
    }
    return 0;
}