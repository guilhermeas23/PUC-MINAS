#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// This program calculates the value of H, where H is:
// H = 1/1 + 1/3 + 1/9 + 1/27 + ...
// The calculation of H is performed with a precision of N terms, where N is an input value.

int main() {
    int N, i;
    double H = 0, divisor = 1;

    
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid number of terms! Enter a positive value.\n");
        return 1;
    }

   
    for (i = 0; i < N; i++) {
        H += 1 / divisor;
        divisor *= 3; 
    }

    printf("The value of H with precision of %d terms is: %.10f\n", N, H);

    return 0;
}
