#include <stdio.h>

int main() {
    // Declare variables
    int num;
    char grade;

    // Example using if-else
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Example using switch
    printf("Enter your grade (A, B, C, D, F): ");
    getchar(); // To consume the newline character left by previous input
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good.\n");
            break;
        case 'D':
            printf("You passed.\n");
            break;
        case 'F':
            printf("Better try again.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

    return 0;
}

