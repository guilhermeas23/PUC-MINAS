#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Calcular e escrever o valor de H, sendo H igual a:
// H = 1/1 + 1/3 + 1/9 + 1/27 + ...
// H com precisao de dez termos.

int main() {
    int i;
    double H = 0, divisor = 1;

    for (i = 0; i < 10; i++) {
        H += 1 / divisor;
        divisor *= 3;
    }

    printf("O valor de H com precisao de 10 termos e: %.10f\n", H);

    return 0;
}
