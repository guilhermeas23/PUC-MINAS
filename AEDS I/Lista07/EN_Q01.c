#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// This program calculates exponentiation iteratively. The base and exponent are provided by the user.
// The base must be a real number, and the exponent must be a non-negative integer (zero or positive).

int main() {
    float base, result = 1;
    int exponent, i;

    printf("Enter the base (real number): ");
    scanf("%f", &base);

    
    do {
        printf("Enter the exponent (non-negative integer): ");
        scanf("%d", &exponent);
        if (exponent < 0) {
            printf("Invalid exponent! Please enter a non-negative integer.\n");
        }
    } while (exponent < 0);

    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("The result of %.2f raised to the power of %d is: %.2f\n", base, exponent, result);

    return 0;
}
