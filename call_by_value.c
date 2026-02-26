#include <stdio.h>

int call_by_value(int b){
    b = 6;
    return 0;
}
//  int call_by_reference(int *b){
//      *b = 7;
//      return b;
//  }

int main(){
    int a = 100;
    int b = 102;
    int c=call_by_value(a);
    // call_by_reference(*b);
    printf("%d\n",a);
    printf("%d\n",c);
    return 0;
}