#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen( "open.txt", "r");

    int num = 23;
    fprintf( ptr, "%d", num);

    fscanf( ptr, "%d", &num); 
    printf("The num %d",num);

    fclose(ptr);

    return 0;
}