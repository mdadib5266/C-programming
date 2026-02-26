#include <stdio.h>

int ref(int* a){
    return *a=6;
}

int main(){
    int i;
    ref(&i);
    printf("%d\n",i);
    return 0;
}