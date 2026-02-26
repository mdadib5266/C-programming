#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    for(int i = 0;i < 7 / 2;i++){
        // int *p1 = &arr[i];
        // int *p2 = &arr[6-i];

        // int temp = *p1;
        // *p1 = *p2;
        // *p2 = temp;
        int l = *&arr[i];
        *&arr[i] = *&arr[6 - i];
        arr[6 - i] = l;
    }

    for(int i = 0;i < 7;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}