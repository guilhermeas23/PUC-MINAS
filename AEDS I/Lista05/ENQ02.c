#include <stdio.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// STATEMENT:
// Build a program that prints the integers from ten to one in descending order on the video monitor screen. Use a loop with the test at the end.

int main() {
    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}
