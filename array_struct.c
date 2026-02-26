#include <stdio.h>

struct Person{
    int age;
    float salary;
};

int main(){
    struct Person person[10];

    person[0].age = 15;
    person[0].salary = 5000000;

    printf("Person2\n");
    scanf("%d %f",&person[1].age,&person[1].salary);

    // struct Person person[2] = {66,218387};

    person[3] = person[2];

    printf("Person1 %d %f\nPerson2 %d %f\nPerson3 %d %f\nPerson4 %d %f\n",person[0].age,person[0].salary,person[1].age,person[1].salary,person[2].age,person[2].salary,person[3].age,person[3].salary);
    return 0;
}