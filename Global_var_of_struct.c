#include <stdio.h>

struct Person{
    int age;
    float salary;
};

int main(){
    struct Person person1,person2;
    // person1.age = 23;
    // person1.salary = 15000.0;

    // person2.age = 24;
    // person2.salary = 14500.55;

    printf("Person1\n");
    scanf("%d %f",&person1.age,&person1.salary);

    printf("Person2\n");
    scanf("%d %f",&person2.age,&person2.salary);
 
    printf("Person1 \n");
    printf("Age and Salary: %d %f\n",person1.age,person1.salary);

    printf("Person2 \n");
    printf("Age and Salary: %d %f\n",person2.age,person2.salary);

    return 0;
}