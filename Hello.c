#include <stdio.h>

int main(){
    // char st = {'H','E','L','L','O',};
    char st[] = "Hello";
    char s[10];// 10th one will be excluded
    scanf("%s",&s);// scanf adds an additional null charracter at the end of the string.

    // when we use "" for string the null charracter is automatically included!
    for(int i = 0; st[i] != '\0'; i++){
        printf("%c", st[i]);
    }
    printf("\n");
    printf("%s", st);
    printf("\n");
    printf("%s", s);
    return 0; 
} 