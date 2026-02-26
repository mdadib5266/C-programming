#include <stdio.h>
int main()
{
    int a=5,b=10,g,i;
    if(a>b)g=b;
    else g=a;
    for(i=1;i<g;i++){
        if(a%g==0&&b%g==0){
            printf("%d\n",g);
            break;
        }
    }
    printf("gcd %d\n",g);
    printf("lcm %d",a*b/g);
    return 0;
}