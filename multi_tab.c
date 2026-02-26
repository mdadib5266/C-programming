#include <stdio.h>

int main(){
    // int n;
    int arr[3];
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    int multi[10][3];

    // for(int j = 0;j < 3;j++){
    //     for(int i = 0;i < 10;i++){
    //         printf("%d X %d = %d\n",arr[j],i+1,arr[j]*(i+1));
    //     }
    //     printf("\n");
    // }

    int k = 1;

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            multi[i][j] = arr[j];
            multi[i][j + 1] = k;
            multi[i][j + 2] = arr[j] * k++;  
        }
    }

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("%d X %d = %d\n",multi[i][j],multi[i][j + 1],multi[i][j + 2]);
        }
    }

    k = 1;
    printf("\n");

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            multi[i][j] = arr[j + 1];
            multi[i][j + 1] = k;
            multi[i][j + 2] = arr[j + 1] * k++;  
        }
    }

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("%d X %d = %d\n",multi[i][j],multi[i][j + 1],multi[i][j + 2]);
        }
    }
    
    k = 1;
    printf("\n");

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            multi[i][j] = arr[j + 2];
            multi[i][j + 1] = k;
            multi[i][j + 2] = arr[j + 2] * k++;  
        }
    }

    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 1;j++){
            printf("%d X %d = %d\n",multi[i][j],multi[i][j + 1],multi[i][j + 2]);
        }
    }

    return 0;
}