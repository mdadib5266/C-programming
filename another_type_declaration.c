#include <stdio.h>

int main(){
    int cgpa[3] = {9,8,8};
    for(int i = 0;i < 3;i++){
        printf("CGPA of %d is: %d\n",i+1,cgpa[i]);
    }

    printf("\n");

    int cgpa1[] = {9,8,8};//any element in memoery is continuous 
    for(int i = 0;i < 3;i++){
        printf("CGPA of %d is: %d\n",i+1,cgpa1[i]);
    }
    return 0;
}