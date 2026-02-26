#include <stdio.h>

int main(){
    char i;
    char* j=&i;//pointer declaration
    // int k=56;

    float k = 67;
    float* l=&k;
    // scanf("%f",&l);
    // the pointer variable should be of same data type
    // int* l=&k; -- wrong

    // j is a pointer pointing to i(j is an integer pointer)
    // j is storing is address
    // * -- value at address or star operator

    printf("The address i & j is %p %p\n",&i,&j);
    printf("The address i & j is %u %u\n",&i,&j);
    printf("The address k %p\n",k);

    printf("The value of k at the address & address is %.3f %o\n",*l,l);


    return 0;
}