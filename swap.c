#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int sum(int *a, int *b) {
  return (*a + *b);
}

int main() {
  int x = 1, y = 6;
  swap(&x, &y);
  printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
  printf("The value of x is %d", x);
  return 0;
}