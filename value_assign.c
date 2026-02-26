#include <stdio.h>

int main(){
    int i=5;
    // int* j=&i;
    // *j=5*10;
    *(&i)=5*10;
    printf("%d\n",i);
    return 0;
}