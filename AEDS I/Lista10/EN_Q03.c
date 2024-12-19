#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Calculate and write the first ten terms of the sequence below:
// 10/100, 99/11, 12/98, 97/13, 14/96, ...

int main() {
    int numerators[] = {10, 99, 12, 97, 14, 95, 16, 93, 18, 91};
    int denominators[] = {100, 11, 98, 13, 96, 15, 94, 17, 92, 19};
    int terms = 10;

    for (int i = 0; i < terms; i++) {
        printf("%d/%d\n", numerators[i], denominators[i]);
    }

    return 0;
}
