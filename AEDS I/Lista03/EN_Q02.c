#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// This program takes three values and determines which one is the greatest.

int main() {
    float a, b, c, major;
    printf("Enter the first value:");
    scanf("%f", &a);
    printf("Enter the second value:");
    scanf("%f", &b);
    printf("Enter the third value:");
    scanf("%f", &c);

    if (a > b && a > c) {
        printf("The greatest value is %f", a);
    } else if (b > a && b > c) {
        printf("The greatest value is %f", b);
    } else {
        printf("The greatest value is %f", c);
    }

    return 0;
}
