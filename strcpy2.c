#include <stdio.h>

int strlen(char source[]){
    int count = 0;
    for(int i = 0;source[i] != '\0';i++){
        count++;
    }
    // int i;
    return count;
}

void strcp(char target[],char source[]){
    for(int i = 0;i < strlen(source);i++){
        target[i] = source[i]; 
    }

    target[strlen(source)] = '\0';
}

int main(){
    char source[] = "Adib";
    char target[50];

    printf("Strlen %d\n",strlen(source));

    strcp(target,source);// i can modify something after sending it to a factory part or i can call the factory part to do it and it comes and does it
    // the main factory doesnt necesserily gives the output , the factory part may also give output

    printf("%s",target);

    return 0;
}