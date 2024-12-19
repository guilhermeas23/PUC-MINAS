#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Read a natural number and check if it is prime or not. A natural number is prime if it is divisible only by one and itself.

int main() {
    int number, i, isPrime = 1;

    do {
        printf("Enter a natural number: ");
        scanf("%d", &number);
        if (number <= 0) {
            printf("Invalid number! Enter a natural number.\n");
        }
    } while (number <= 0);

    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime && number != 1) {
        printf("The number %d is prime.\n", number);
    } else {
        printf("The number %d is not prime.\n", number);
    }

    return 0;
}
