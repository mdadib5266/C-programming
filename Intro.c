//pointer stores the address of another variable 
//lets say 72. it occupies 1 byte . thats why it will take like 87994 to 87995 memory location including 87994. if the machine achitechure takes integer as 4 bytes , it would have taken 87994 to 87997 -- 4 bytes.
// i is containing 72 integer and its address is 87994. j is containing the 87994. here i is a varible but j is pointer variable! 

#include <stdio.h>

int main(){
    int j =2;
    int i=72;

    printf("The address i is %p %p\n",&i,&j);
    printf("The address of j & i is in integer %u %u\n",&j,&i);
    //u for unsigned int.

    // for --
    // int i=72;
    // int j =2;
    // The address i is 0061FF1C 0061FF18
    // The address of i is in integer 6422296 6422300

    //for --
    // int j =2;
    // int i=72;
    // The address i is 0061FF18 0061FF1C
    // The address of i is in integer 6422300 6422296

    // BOTTOM TO UP APPROACH

    return 0;
}