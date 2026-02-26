#include <stdio.h>

int main(){
    int a,b,fact,n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    a=0;b=1;
    printf("%d\n",a);
    for(i=0;fact<n;i++){
        a=b;
        b=fact;
        fact=a+b;
        if(fact>n)continue;
        printf("%d\n",fact);
    }
    return 0;
}