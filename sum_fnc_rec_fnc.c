#include <stdio.h>

int sum(int n){
    // int sum1;
    if(n==1)return 1;
    return n+sum(n-1);
}

int main(){
    // int sum;
    printf("Sum: %d",sum(3));
    return 0;
}