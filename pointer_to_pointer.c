#include <stdio.h>

int main(){
    int i=6;
    int* j=&i;// it will store the address of i
    int** k=&j;// it will store the address of i's address!!

    printf("i %d\n",i);
    printf("i %d\n",*j);
    printf("Address i %d\n",**k);
    printf("Address i %d\n",*k);
    printf("Address i %d\n",***(&k));// ***&k==i==6.
    // printf("Address i %d\n",**(&&i)); -- ERROR
    // printf("Address i %d\n",**(&&k)); -- ERROR.

    // printf("Address i and j: %d %d",j,k);
    // i can put as much stars as i want!!
    // * and & cancel each other -- **&&a == a.

    return 0;
}