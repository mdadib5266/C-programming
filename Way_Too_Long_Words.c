#include <stdio.h>
#include <string.h>
 
int main(){
    char str[101];
    int n;
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%s", str);
        if(strlen(str) > 10){
            printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str) - 1]);
        }
        else{
            printf("%s\n", str);
        }
    }
 
    return 0;
}