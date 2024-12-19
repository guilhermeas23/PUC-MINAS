#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION: This program calculates the roots of a quadratic equation of the form ax^2 + bx + c = 0

int main() {
    float x1, x2, delta, a, b, c;

    printf("Quadratic Equation Solver\n");
    printf("\nEnter the value for a: ");
    scanf("%f", &a);
    printf("\nEnter the value for b: ");
    scanf("%f", &b);
    printf("\nEnter the value for c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;

    if (delta < 0) {
        printf("The equation has no real roots");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("The roots of the quadratic function are %.2f and %.2f", x1, x2);
    }

    return 0;
}
