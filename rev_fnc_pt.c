#include <stdio.h>

void printarray(int arr[], int n){
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void reversing(int arr[],int n){
    for(int i = 0;i < n / 2; i++){
        int l = *&arr[i];
        *&arr[i] = *&arr[n - 1 - i];
        *&arr[n - 1 - i] = l;
    }
    // printarray(arr,n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;

    printarray(arr,n);
    reversing(arr,n);
    printarray(arr,n);
    return 0;
}