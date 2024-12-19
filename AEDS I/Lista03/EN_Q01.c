#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// This program checks if the sum of two values (a and b) is less than a third value (c).

int main() {
    float a, b, c;
    printf("Enter the value for a:");
    scanf("%f", &a);
    printf("Enter the value for b:");
    scanf("%f", &b);
    printf("Enter the value for c:");
    scanf("%f", &c);

    if (a + b < c) {
        printf("The value of a+b is less than c.");
    } else {
        printf("The value of a+b is not less than c.");
    }

    return 0;
}
