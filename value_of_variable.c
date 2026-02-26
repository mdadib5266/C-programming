#include <stdio.h>

int main(){
    int i=5;
    printf("%p\n",&i);    
    printf("%u\n",&i);    
    printf("%d\n",*(&i));
    return 0;
}