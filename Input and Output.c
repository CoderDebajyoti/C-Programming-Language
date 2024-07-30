#include <stdio.h>

int main() {
    // Declare variables
    int age;
    float height;
    double weight;
    char grade;

    // Prompt user for input and read the values
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your weight (in kg): ");
    scanf("%lf", &weight);

    // To consume the newline character left by previous input
    getchar();

    printf("Enter your grade: ");
    scanf("%c", &grade);

    // Print the values
    printf("\nYou entered:\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Weight: %.2lf kg\n", weight);
    printf("Grade: %c\n", grade);

    return 0;
}

