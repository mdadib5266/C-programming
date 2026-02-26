#include <stdio.h>

struct Person{
    char name[50];
    int age;
    float salary;
};

void display(struct Person person){
    printf("Name %s\n",person.name);
    printf("Age %d\n",person.age);
    printf("Salay %f\n",person.salary);
}

int main(){
    struct Person person1;
    strcpy(person1.name,"Sakib khan");
    person1.age = 22;
    person1.salary = 45000;
    display(person1);

    return 0;
}