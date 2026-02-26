#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt", "r");

    if(ptr == NULL){
        printf("The fike doesnt exist.\n");
    }
    else{
        int num;
        fscanf( ptr, "%d", &num);
        printf("The first num %d",num);
    }

    fclose(ptr);

    return 0;
}