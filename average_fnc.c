#include <stdio.h>

float average(int,int,int);
float average(int a,int b,int c){
    return (a+b+c)/3;
}

int main(){
    int x,y,z;
    printf("x y z: \n");
    scanf("%d %d %d",&x,&y,&z);

    printf("Average :%5.2f",average(x,y,z));
    return 0;
}