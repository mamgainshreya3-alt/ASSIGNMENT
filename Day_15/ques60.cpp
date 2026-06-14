#include <stdio.h>
int main(){
    int n, index = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }
    while(index < n){
        arr[index] = 0;
        index++;
    }
    printf("Array after moving zeroes:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}