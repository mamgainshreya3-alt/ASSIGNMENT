#include <stdio.h>
int main(){
    int a, b,i,j;
    printf("Enter size of first array: ");
    scanf("%d", &a);
    printf("Enter first array elements:");
    int arr1[a];
    for(i = 0; i < a; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &b);
    printf("Enter second array elements:");
    int arr2[b];
    for(i = 0; i < b; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Intersection:");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}