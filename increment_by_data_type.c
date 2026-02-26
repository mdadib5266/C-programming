// A pointer can be incremented to point to the next memory location of that type
// Incrementing the value of address according to the data type is called pointer arithmetic

#include <stdio.h>

int main(){
    // POINNTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    // why did it incremented ptr by 4 instead of 1?!! 
    // Cuz the architechure takes int in c as 4 bytes.

    printf("\n");
    
    // POINTER ARITHMETIC USING CHARRACTER POINTER
    char b = 'a';
    char* ptr1 = &b;// Pointer must be of the same data type it's pointing .Not int as its containing the address of a charracter
    printf("The address of a is %u\n", &b);
    printf("The address of a is %u\n", ptr1);
    ptr1++;
    printf("The value of ptr is %u\n", ptr1);
    return 0;
}