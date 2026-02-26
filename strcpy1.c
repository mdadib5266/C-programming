#include <stdio.h>

void strcp(char str[],char str1[]){
    char str1[100];
    for(int i = 0;i < 19;i++){
        str1[i] = str[i];
    }
    str1[19] = '\0';
    printf("%s",str1[100])
}

int main(){
    char str[] = "Hello! how are you?";
    char str1[100];
    strcp(str,str1);
    return 0;
}