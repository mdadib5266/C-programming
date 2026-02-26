#include <stdio.h>

int* sum(int a,int b){
    int sum=a+b;
    int* ptr=&sum;
    printf("The sum is: %d\n",a+b);
    return ptr;
}

float* average(int a,int b){
    float avg=(a+b)/2.0;
    float* ptr=&avg;
    printf("The average is: %f\n",(a+b)/2.0);
    return ptr;
}

int main(){
    printf("The address of the sum: %u\n",sum(2,3));
    printf("The address of the average is: %u\n",average(5,6));
    return 0;
}