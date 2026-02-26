#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void main(){
    // struct employee e[10];
    // e[0].code = 12;
    // strcpy(e[0].name, "Noyon");

    // same as above
    typedef struct employee Emp;

    Emp e[10];
    Emp *ptr = &e;

    e[0].code = 12;
    strcpy(e[0].name, "Noyon");

    printf("%d %s\n", e[0].code, e[0].name);
    printf("%d %s\n", ptr->code, ptr->name);
}