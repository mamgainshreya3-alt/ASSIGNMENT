#include <stdio.h>
int main(){
    int n, max_frequency = 0, element;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],i,j;
    printf("Enter array elements:\n");
    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for( i = 0; i < n; i++){
        int count = 1;
        for( j = i + 1; j < n; j++){
            if(arr[i] == arr[j])
                count++;
        }
        if(count > max_frequency){
            max_frequency = count;
            element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d", element);
    return 0;
}