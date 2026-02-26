#include <stdio.h>

int main(){
    int rows;
    scanf("%d", &rows);

    char decide[rows][3];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &decide[i][j]);
        }
    }
    int count = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 1; j++){
            if(decide[i][j] == 1 && decide[i][j + 1] == 1 || decide[i][j + 1] == 1 && decide[i][j + 2] == 1 || decide[i][j] == 1 && decide[i][j + 2] == 1){
                count++;
            }                
        }
    }

    printf("%d", count);

    return 0;
}