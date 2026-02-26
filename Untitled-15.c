//
#include <stdio.h>
#include <string.h>

int main() {
    char binary[50];
    int decimal = 0;

    printf("Enter binary number: ");
    scanf("%s", binary);

    for(int i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("Decimal value = %d", decimal);
    return 0;
}
