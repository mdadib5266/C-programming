#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<3;i++){
        //this for is for rows ; the more rows the more iteration
        for(j=0;j<2*i+1;j++){
            //this for is for colls; here its to print odd columns as it is 2n+1!
            printf("*");
        }
        printf("\n");
    }

    return 0;
}