#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen( "Open.txt", "w");

    if(ptr == NULL){
        printf("File doent exist.\n");
    }
    else{
        // char c = fgetc(ptr);// used to read a charracter froma file
        // printf("%c\n",c);
        char c;
        fputc('c', ptr);
        fscanf( ptr, "%d", &c);
        printf("the num is %c\n", c);
    }

    return 0;
}