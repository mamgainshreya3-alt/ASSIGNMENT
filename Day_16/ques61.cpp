#include <stdio.h>
int main(){
    int n, sum = 0, exp;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int arr[n - 1],i;
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    exp = n * (n + 1) / 2;
    printf("Missing Number = %d", exp - sum);
    return 0;
}