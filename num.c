#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    //the file has to be in the same directory.
    int num;
    fscanf(ptr, "%d", &num);// first 15
    printf("The first number of the file %d\n",num);
    fscanf(ptr, "%d", &num);// second 16
    // the pointer moves ecah time i call it it will take 16 now
    printf("The second number of the file %d\n",num);

    fclose(ptr);
    return 0;
}