#include <stdio.h>

char *slice(char str[], int m, int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    
    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    char str[] = "Hi im adib.";
    // char *ptr = &st r[3];  
    // printf("%s",slice(str,1,7));
    printf("%s",slice(str,0,7));
    // %s starts accessing the string from the point the pointer pointed if we write the pointers value as %s like "%s",*ptr.  
    return 0;
}