#include <stdio.h>

int main(){
    int arr[10][3];
    int n;

    scanf("%d",&n);

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("%d x %d = %d",n,i + 1,n * (i + 1));
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            arr[i][j] = n;
            arr[i][j + 1] = i + 1;
            arr[i][j + 2] = n * arr[i][j + 1];
        }
        // printf("\n");
    }

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("%d x %d = %d",arr[i][j],arr[i][j + 1],arr[i][j + 2]);
        }
        printf("\n");
    }

    return 0;
}