#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry1.txt", "w");

    int num;

    // scanf( ptr, "%d", &num);
    // printf("The num %d",num);

    fprintf(ptr, "%d", num);

    fscanf( ptr, "%d", &num);
    printf("The num %d", num);
    fclose(ptr);

    return 0;
}