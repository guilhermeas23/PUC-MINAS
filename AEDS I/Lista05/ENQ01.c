#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// STATEMENT:
// This program is a simple calculator that allows the user to perform basic arithmetic operations.

int main() {
    int option;
    float num1, num2, result;
    bool error;

    printf("Calculator\n");
    printf("\nProgram output");
    printf("\n1-Addition");
    printf("\n2-Subtraction");
    printf("\n3-Multiplication");
    printf("\n4-Division");

    do {
        printf("\nChoose an operation to process:");
        scanf("%d", &option);
        error = option < 1 || option > 4;
        if (error) printf("Invalid value");
    } while (error);

    if (option != 0) {
        printf("\nEnter the first number:");
        scanf("%f", &num1);
        printf("\nEnter the second number:");
        scanf("%f", &num2);
    }

    switch (option) {
        case 0:
            printf("Operation is not possible");
            break;
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero");
            } else {
                result = num1 / num2;
            }
            break;
    }

    printf("%.2f", result);

    while (option != 0);

    return 0;
}
