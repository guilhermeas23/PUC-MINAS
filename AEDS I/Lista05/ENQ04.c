#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// STATEMENT:
// This program calculates and displays the terms of an arithmetic progression (A.P.) based on the first term, the common difference, and the desired number of terms.

int main() {
    printf("Terms of the Arithmetic Progression\n");
    float num1, difference;
    int N;

    printf("\nEnter the first term: ");
    scanf("%f", &num1);

    printf("\nEnter the common difference of the A.P.: ");
    scanf("%f", &difference);

    do {
        printf("Enter the number of desired terms: ");
        scanf("%d", &N);
    } while (N < 1);

    do {
        printf("%.2f, ", num1);
        num1 = num1 + difference;
        N--;
    } while (N > 0);

    return 0;
}
