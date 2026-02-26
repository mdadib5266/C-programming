#include <stdio.h>

int main(){
    char st[] = {'a','b','c','\0'};
    printf("First charracter is %c",st[0]);
    printf("%c",st[1]);
    printf("%c",st[2]);
    // In strings charracters are stored in contiguous memory loactions or continous
    return 0;
}