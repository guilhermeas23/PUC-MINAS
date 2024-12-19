#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Calculate and write the value of H, where H is:
// H = 1/1 + 1/3 + 1/9 + 1/27 + ...
// H with a precision of ten terms.

int main() {
    int i;
    double H = 0, divisor = 1;

    for (i = 0; i < 10; i++) {
        H += 1 / divisor;
        divisor *= 3;
    }

    printf("The value of H with a precision of 10 terms is: %.10f\n", H);

    return 0;
}
