#include <stdio.h>

// char lower(char c){
//   if(c < 97 && c != ' '){
//     return c + 32;
//   }
// }

void lower(char x[]){
  for(int i = 0;x[i] != '\0';i++){
    if(x[i] < 97 && x[i] != ' '){
      x[i] = x[i] + 32;
    }
  }
}

int f(char x[]){
  int count = 0;
  for(int i = 0;x[i] != '\0';i++){
    if(x[i] == 'i'){
      count++;
    }
  }
  return count;
}

int main(){
  char x[] = "Im Adib";
  lower(x);
  int counti = f(x);
  
  printf("%s\n",x);
  printf("Count i: %d\n",counti);
  
  return 0;
}