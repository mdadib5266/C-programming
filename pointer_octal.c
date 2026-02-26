#include<stdio.h>
#include<string.h>  
int main(){
    char str1[100],str2[100] ;
    gets(str1);
    //getchar();
    gets(str2);
    int d=strcmp(str1,str2);
    if(d==0){
        printf("The strings are equal\n");
    }
    else{
        printf("The strings are not equal\n");
    }
    printf("The octal value of str1 is %d\n",d);
    // printf("%o\n",&i);
    return 0;
}