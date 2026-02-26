#include <stdio.h>

int main(){
    int i;
    int marks[5];
    printf("Enter marks until 5: \n");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++){
        printf("Marks: %d\n",marks[i]);
    }
    return 0;
}