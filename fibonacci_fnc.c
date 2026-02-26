#include <stdio.h>

int fibonacci(int);
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    //printf("%d\n",fibonacci(n));
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;

    printf("Enter n: \n");
    scanf("%d",&n);

    printf("Nth fibonacci %d\n",fibonacci(n));

    return 0;
}