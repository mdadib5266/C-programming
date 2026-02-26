#include <stdio.h>

int main(){
    int i=2;
    int* ptr=&i;
    int** ptr1=&ptr;
    printf("The value of the address of i: %u\n",&i);
    printf("The value of i using pointer to pounter: %d\n",**ptr1);
    printf("The value of i using pointer to pointer: %d\n",*ptr);
    return 0;
}