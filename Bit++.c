#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char statment[5];
    int x = 0;

    for(int i = 0; i < n; i++){
        scanf("%s", statment);
        if(strstr(statment, "++")){
            x++;
        }
        else{
            x--;
        }
    }
    printf("%d", x);
    return 0;
}