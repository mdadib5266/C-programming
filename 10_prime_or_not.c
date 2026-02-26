#include <stdio.h>

int main(){
    int flag=0,i,n;
    printf("Enter n: ");
    scanf("%d",&n);


    for(i=2;i<=n/2;i++){
        if(n%i==0&&n!=2){
            flag = 1;
            break;
        }
    }

    if(!flag){
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }

    return 0;
}