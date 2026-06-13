#include <stdio.h>
int main(){
    int n, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter array elements:\n");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even elements = %d", even);
    printf("Odd elements = %d", odd);
    return 0;
}