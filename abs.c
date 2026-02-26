#include <stdio.h>

int abrarbussock(int a){
    if(a >= 0) return a;
    else return (-1)*a;
}

int main(){
    int a = -2;
    printf("%d\n", a);
    // printf("abs: %d\n", abs(a));
    printf("abrarbussock: %d\n", abrarbussock(a));
    return 0;
}