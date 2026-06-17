#include <stdio.h>
int main(){
    int a, b;
    printf("Enter size of first array: ");
    scanf("%d", &a);
    int arr1[a],i;
    printf("Enter first array elements:\n");
    for(i = 0; i < a; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter second array elements:\n");
    for(i = 0; i < b; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Merged Array:\n");
    for(i = 0; i < a; i++){
        printf("%d ", arr1[i]);
    }
    for(i = 0; i<b; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}