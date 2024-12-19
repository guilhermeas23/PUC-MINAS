#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// Build a calculator using switch case

int main() {
    float num1, num2, result;
    int option;

    printf("Program output:");
    printf("\n1-Addition");
    printf("\n2-Subtraction");
    printf("\n3-Multiplication");
    printf("\n4-Division");
    printf("\nChoose an operation to process:");
    scanf("%d", &option);

    printf("\nEnter the first value:");
    scanf("%f", &num1);
    printf("\nEnter the second value:");
    scanf("%f", &num2);

    switch (option) {
        case 1:
            result = num1 + num2;
            printf("The result is %.2f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("The result is %.2f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("The result is %.2f", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("The result is %.2f", result);
            } else {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid option!");
            break;
    }

    return 0;
}
