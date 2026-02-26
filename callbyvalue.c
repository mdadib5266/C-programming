#include <stdio.h>

int call_by_value(int a){
// int* call_by_value(int* a){
    a = 7;
    // *a = 7;
    // return *a;
    return a;
}

int main(){
    int x = 5;
    call_by_value(x);
    // call_by_value(&x);
    printf("The value of x: %d\n",x);
    return 0;
}