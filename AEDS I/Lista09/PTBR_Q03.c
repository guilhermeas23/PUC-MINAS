#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa calcula o valor de H, sendo H igual a:
// H = 1/1 + 1/3 + 1/9 + 1/27 + ...
// O calculo de H e realizado com precisao de N termos, sendo N um valor lido.

int main() {
    int N, i;
    double H = 0, divisor = 1;


    printf("Digite o numero de termos (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero de termos invalido! Insira um valor positivo.\n");
        return 1;
    }

    // Calculo de H
    for (i = 0; i < N; i++) {
        H += 1 / divisor;
        divisor *= 3;
    }


    printf("O valor de H com precisao de %d termos e: %.10f\n", N, H);

    return 0;
}
