#include <stdio.h>

int sum_avg(int* a, int* b){
    return *a=5;
    return *b=6;
}

int main(){
    int x,y;
    sum_avg(&x,&y);
    printf("%d %d\n",x+y,(x+y)/2);
    return 0;
}