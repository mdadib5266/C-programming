#include <stdio.h> 

struct Person{//global structure
    int age;
    float salary;
};

//struct Person person1,person2; // global variable

int main(){
    //struct Could have written here
    struct Person person1,person2;//local variables
    
    // element wise assignment
    person1.age = 25;
    person1.salary = 15000.0;

    person2.age = 24;
    person2.salary = 14500.5;

    printf("Person1 \n");
    printf("Age: %d\n",person1.age);
    printf("Salary: %f\n",person1.salary);

    printf("Person2 \n");
    printf("Age: %d\n",person2.age);
    printf("Salary %f\n");

    return 0;
}