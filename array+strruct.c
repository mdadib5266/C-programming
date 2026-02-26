#include <stdio.h>

struct Person{
    char name[50];
    int age;
    float salary;
};

int main(){
    struct Person person[3];

    for(int i = 0; i < 3 ; i++){
        printf("Enter the age of person %d\n", i+1);
        scanf("%d", &person[i].age);
        printf("Enter the salary of person %d\n", i+1);
        scanf("%f", &person[i].salary);
        printf("Enter the name of person %d\n",i+1);
        getchar();
        fgets(person[i].name, sizeof(person[i].name),stdin);
        // ffast();
    }

    printf("\n");

    for(int i = 0; i < 3 ; i++){
        printf("The name of person %d is %s", i+1, person[i].name);
        // printf(person[i].name);
        // getchar();
        printf("The age of person %d is %d\n", i+1, person[i].age);
        printf("The salary of person %d is %f\n", i+1, person[i].salary);
        printf("\n");
    }

    return 0; 
}