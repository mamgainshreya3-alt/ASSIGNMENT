#include <stdio.h>
int main(){
    int a, b,i,j;
    printf("Enter size of first array:");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter first array elements:");
    for(i = 0; i < a; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array:");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter second array elements:");
    for(i = 0; i < b; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Common Elements:");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}