#include <stdio.h>

int main(){
    char *ptr = "Adib";// this ptr points to the first charracter of the string.
    // then the printf() accesses the full string
    printf("%s\n",*&ptr);
    ptr = "hi";
    puts(ptr);
    printf("%s",*&ptr);
    return 0;
}