#include <stdio.h>
#define PI 3.1416
#include <math.h>

float cir_area(int a);
float cir_area(int a){
    return PI*pow(a,2);//the statment at first will be returned
    //if returned once a function stops there
    return a;//ignored
}

int main(){
int b;
char c='a',d='b';


printf("Enter radius: \n");
scanf("%d",&b);

printf("Area: %f\n",cir_area(b),b);
printf("%-2c%c",c,d);

return 0;
}