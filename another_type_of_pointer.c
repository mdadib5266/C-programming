#include <stdio.h>

int main(){
    char i ='A';
    char* j=&i;//pointer declaration
    // int k=56;

    float k=1.111;
    float* l;
    l=&k;

    int m=8;
    int* n;
    n=&m;

    // the pointer variable should be of same data type
    // int* l=&k; -- wrong

    // j is a pointer pointing to i(j is an integer pointer)
    // j is storing is address
    // * -- value at address or star operator

    printf("The address i & j is %p %p\n",&i,&j);
    printf("The address i & j is %u %u\n",&i,&j);

    printf("The value of k at the address & address is %.3f %d\n",*l,l);

    printf("Value m= %d\n",&m);
    printf("Value m= %d\n",n);
    printf("Value n= %u\n",&n);
    printf("Value m= %d\n",m);
    printf("Value m= %d\n",*(&m));//*&m==*(&m)
    printf("Value m= %d\n",*n);
    return 0;
}