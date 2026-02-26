#include <stdio.h>

int main(){
    int marks[] = {12, 34, 53, 66};

    // int* ptr = &marks[0];
    int* ptr = marks;// same as int* ptr = &marks[0]; 

    for(int i = 0;i < 4;i++){
        printf("The value of %d is %u\n",i+1,ptr);
        printf("The value of %d is %u\n",i+1,*ptr++);
        // ptr++; same as *ptr++ 
    }
    
    return 0;
}