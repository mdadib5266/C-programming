#include <stdio.h>

struct employee{
    int age;
};

int main(){
    struct employee a;
    a.age = 5;
    printf("%d",a);
    return 0;
}