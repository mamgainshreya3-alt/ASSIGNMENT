#include <stdio.h>
int main() {
    int n, temp, min_Index;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], i, j;
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++) {
        min_Index = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_Index]) {
                min_Index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_Index];
        arr[min_Index] = temp;
    }
    printf("Sorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}