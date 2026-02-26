#include <stdio.h>

int main() {
    int arr[3];
    int table[3][10][3];

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    // ---- store ----
    for(int n = 0; n < 3; n++) {
        for(int i = 0; i < 10; i++) {
            table[n][i][0] = arr[n];        // number
            table[n][i][1] = i + 1;         // multiplier
            table[n][i][2] = arr[n] * (i + 1); // result
        }
    }

    // ---- print ----
    for(int n = 0; n < 3; n++) {
        for(int i = 0; i < 10; i++) {
            printf("%d X %d = %d\n",
                   table[n][i][0],
                   table[n][i][1],
                   table[n][i][2]);
        }
        printf("\n");
    }

    return 0;
}
