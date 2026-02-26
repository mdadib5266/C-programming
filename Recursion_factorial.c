#include <stdio.h>

int recur(int a);
int recur(int a){
    if(a==0){
        return 1;//recuesive function must have a base condition
    }
    return a*recur(a-1);
}

int main(){
    int a;
    printf("Enter a: \n");
    scanf("%d",&a);
    printf("Factorial %d",recur(a));

    return 0;
}