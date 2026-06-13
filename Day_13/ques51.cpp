#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int a = arr[0];
    int b = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > a){
            a = arr[i];
        }
        if(arr[i] < b){
            b = arr[i];
        }
    }
    printf("Largest = %d", a);
    printf("Smallest = %d", b);
    return 0;
}