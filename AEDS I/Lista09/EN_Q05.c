#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Calculate and write the first n Fibonacci terms, where n is a value read from the user.

int main() {
    int n, i;
    unsigned long long term1 = 0, term2 = 1, next;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value! Enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci sequence with %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%llu ", term1);
        next = term1 + term2;
        term1 = term2;
        term2 = next;
    }

    printf("\n");

    return 0;
}
