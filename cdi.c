#include <stdio.h>
int main() {
    char p1, p2;
  
    scanf(" %c", &p1);
    scanf(" %c", &p2);

    if (p1 == p2)
        printf("Draw\n");
    else if ((p1 == 'r' && p2 == 's') || (p1 == 'p' && p2 == 'r') || (p1 == 's' && p2 == 'p'))
        printf("Player 1 Wins\n");
    else
        printf("Player 2 Wins\n");
    return 0;
}