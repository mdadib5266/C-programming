#include <stdio.h>

int main(){

    printf("1\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)printf("0 ");
            else printf("1 ");
        }
    }
    return 0;
}