#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter initial size: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter new size: ");
    scanf("%d", &n);
    arr = (int *)realloc(arr, n * sizeof(int));
    printf("Enter new elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}