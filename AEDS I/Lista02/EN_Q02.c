#include <math.h>
//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION
// Build a menu that performs arithmetic operations on two values
int main() {
    float choice, num1, num2, result;

    printf("Calculator\n");
    printf("-----------\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("Enter your choice:");
    scanf("%f", &choice);

    if (choice == 1) {
        printf("Enter a value:");
        scanf("%f", &num1);
        printf("Enter a second value:");
        scanf("%f", &num2);
        result = num1 + num2;
        printf("Result of addition is: %.1f", result);
    } else if (choice == 2) {
        printf("Enter a value:");
        scanf("%f", &num1);
        printf("Enter a second value:");
        scanf("%f", &num2);
        result = num1 - num2;
        printf("Result of subtraction is: %.1f", result);
    } else if (choice == 3) {
        printf("Enter a value:");
        scanf("%f", &num1);
        printf("Enter a second value:");
        scanf("%f", &num2);
        result = num1 * num2;
        printf("Result of multiplication is: %.1f", result);
    } else if (choice == 4) {
        printf("Enter a value:");
        scanf("%f", &num1);
        printf("Enter a second value:");
        scanf("%f", &num2);
        if (num2 == 0) {
            printf("Error: Division by zero");
        } else {
            result = num1 / num2;
            printf("Result of division is: %.1f", result);
        }
    } else {
        printf("Invalid choice!");
    }

    return 0;
}
