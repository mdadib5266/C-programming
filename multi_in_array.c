#include <stdio.h>

int main(){
    int arr[10][3];
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("5 x %d = %d",i+1,5 * (i + 1));
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            arr[i][j] = 5;
            arr[i][j + 1] = i+1;
            arr[i][j+2] = 5 * arr[i][j + 1];
        }
        // printf("\n");
    }



    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("%d x %d = %d",arr[i][j],arr[i][j+1],arr[i][j+2]);
        }
        printf("\n");
    }

    return 0;
}