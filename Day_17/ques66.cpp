#include <stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter size of first array: ");
    scanf("%d",&a);
    int arr1[a];
    printf("Enter elements of first array:");
    for(i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&b);
    int arr2[b];
    printf("Enter elements of second array:");
    for(i=0;i<b;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Union:");
    for(i=0;i<a;i++){
        printf("%d ",arr1[i]);
    }
    for(i=0;i<b;i++){
        int found=0;
        for(j=0;j<a;j++){
            if(arr2[i]==arr1[j]){
                found=1;
                break;
            }
        }
        if(!found){
            printf("%d ",arr2[i]);
        }
    }
    return 0;
}