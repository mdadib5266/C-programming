#include <stdio.h>

int main(){
    int marks[90];// until 89 not 90!
    // every single indexed element occupuies 4 bytes as integer
    printf("Enter marks[5]\n");
    scanf("%d",&marks[5]);
    marks[0]=97;
    marks[1]=93;
    printf("Marks %d %d %d\n",marks[0],marks[1],marks[5]); 
    return 0;
}