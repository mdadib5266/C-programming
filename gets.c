#include <stdio.h>

int main(){
    char st[30];
    gets(st);// better to use fgets
    puts(st);// puts adds a inew line after the string but printf doesnt do that.
    printf("%s",st);
    printf("%s",st);
    return 0;
}