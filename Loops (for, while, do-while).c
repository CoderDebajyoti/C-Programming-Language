#include <stdio.h>

int main() {
    // Using a for loop to print numbers from 1 to 10
    printf("Using for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop to print numbers from 1 to 10
    printf("Using while loop:\n");
    int j = 1;
    while (j <= 10) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Using a do-while loop to print numbers from 1 to 10
    printf("Using do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 10);
    printf("\n");

    return 0;
}

