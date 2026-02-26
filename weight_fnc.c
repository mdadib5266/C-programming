#include <stdio.h>

float weight(float);
float weight(float m){
    return m*9.8;
}

int main(){
    float mass;

    printf("Mass: \n");
    scanf("%f",&mass);

    printf("weight: %2.2f",weight(mass));
    return 0;
}