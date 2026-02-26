#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}Emp; 

void main(){
    // struct employee e[10];
    // e[0].code = 12;
    // strcpy(e[0].name, "Noyon");

    // same as above
    Emp e[10];
    e[0].code = 12;
    strcpy(e[0].name, "Noyon");

    printf("%d %s", e[0].code,e[0].name);
}