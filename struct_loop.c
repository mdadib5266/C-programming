#include <stdio.h>

struct Person{
    int age;
    float salary;
};

int main(){
    struct Person person[2];

    for(int i = 0; i < 2; i++){
        printf("Ehter the age of person %d\n", i+1);
        scanf("%d",&person[i].age);
    }

    for(int i = 0; i < 2; i++){
        printf("Ehter the salary of person %d\n", i+1);
        scanf("%f",&person[i].salary);
    }

    for(int i = 0; i < 2 ; i++){
        printf("The age of person %d is %d\n", i+1, person[i].age);
        printf("The salary of person %d is %f\n", i+1, person[i].salary);
    }

    return 0;
}