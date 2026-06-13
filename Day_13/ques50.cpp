#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter size of array");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    printf("Sum = %d", sum);
    printf("Average = %f", (float)sum / n);
    return 0;
}