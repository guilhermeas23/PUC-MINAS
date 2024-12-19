#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Calculate and write the value of H, where H is:
// H = 1/1 + 1/3 + 1/9 + 1/27 + ...
// The number of terms is read from the user.

int main() {
    int i, N;
    double H = 0, divisor = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid number of terms! Enter a positive value.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        H += 1 / divisor;
        divisor *= 3;
    }

    printf("The value of H with %d terms is: %.10f\n", N, H);

    return 0;
}
