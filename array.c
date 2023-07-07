#include <stdio.h>

int main() {
    char my_array[8][16];

    // Initializing values in the array
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 16; j++) {
            my_array[i][j] = 'A' + i + j;
        }
    }

    // Printing the values in the array
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 16; j++) {
            printf("%c ", my_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
