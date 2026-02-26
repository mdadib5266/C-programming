#include <stdio.h>

void fnc(int* a){
    printf("%x\n",a);
}

int main(){
    int i=5;
    printf("Address of i: %p\n",&i);
    fnc(&i);
    return 0;
}