#include <stdio.h>

struct Person{
    int age;
    float salary;
};

int main(){
    // struct Person person1,person2; //This line and the two following lines cant be written together 

    struct Person person1 = {14, 50000.0};// takes value order wise in the structure declaration
    struct Person person2 = {56,400000.0};
    struct Person person3;

    // structured variable assignment
    person3 = person2;

    // printf("Person1\n");
    // scanf("%d %f",&person1.age,&person1.salary);

    // printf("Person2\n");
    // scanf("%d %f",&person2.age,&person2.salary);
 
    printf("Person1 \n");
    printf("Age and Salary: %d %f\n\n",person1.age,person1.salary);

    printf("Person2 \n");
    printf("Age and Salary: %d %f\n\n",person2.age,person2.salary);

    printf("Person2 \n");
    printf("Age and Salary: %d %f\n\n",person3.age,person3.salary);

    return 0;
}