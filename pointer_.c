//pointer stores the address of another variable 
//lets say 72. it occupies 1 byte . thats why it will take like 87994 to 87995 memory location including 87994. if the machine achitechure takes integer as 4 bytes , it would have taken 87994 to 87997 -- 4 bytes.
// i is containing 72 integer and its address is 87994. j is containing the 87994. here i is a varible but j is pointer variable! 

#include <stdio.h>

int main(){
    int j =2;
    int* i=&j;
    int k=56;

    // j is a pointer pointing to i
    // j is storing is address

    printf("The address i & j is %p %p\n",&i,&j);
    printf("The address i & j is %u\n",&k);
    printf("The address of j & i(pointer--address of j) is in integer %u %d\n",&j,i);

    return 0;
}