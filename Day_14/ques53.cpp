#include <stdio.h>
int main(){
    int n, key, a = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter array elements:\n");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            a = i;
            break;
        }
    }
    if(a != -1){
        printf("Element found at index %d", a);
    }
    else{
        printf("Element not found");
    }
    return 0;
}