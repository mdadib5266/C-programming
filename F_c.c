#include <stdio.h>

float farhenheight(int c){
    return 9.0*c/5 + 32;
}

int main(){
    int x;

    printf("Enter the number: \n");
    scanf("%d",&x);

    printf("Farhenherit:%7.2f\n",farhenheight(x));

    return 0;
}