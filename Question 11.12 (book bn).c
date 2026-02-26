2// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int array[]={2,6,9,15,7,0,9,5},i;
    int sum=0;
    
    for(i=0;i<8;i++){
        sum+=array[i];
    }
    
    printf("The sum is %d",sum);
    
    return 0;
}