#include <stdio.h>

int main(){
    int arr[2][4][3];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 4;j++){
            for(int k = 0;k < 3;k++){
                printf("%u  ",&arr[i][j][k]);
            }
        }
    } 
    return 0;
}