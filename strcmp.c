#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello! ";//return 0.
    char str2[] = "Hello! ";// returns 0.
    // char str2[] = "I'm Adib.";
    printf("Comparison: %d",strcmp(str1,str2));// matches charracter by charracter 
    // it compares as like as dictionary word order (ASCII dictionary).
    // if a word comes like a and f it will return -1. (first - second).
    // if the number isnt 0, the strings arent the same charracter by charracter.
    return 0;
}