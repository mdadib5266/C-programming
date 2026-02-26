#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,67,8,9,10,11};
    int* ptr = &arr[0];
    ptr += 2;
    printf("%d\n",*ptr);
    return 0;
}