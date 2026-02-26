#include <stdio.h>

int count(int arr[], int n){
    int count = 0;
    for(int i = 0;i < n; i++){
        if(arr[i] > 0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    printf("The count of positive number %d\n",count(arr,n));
    return 0;
}