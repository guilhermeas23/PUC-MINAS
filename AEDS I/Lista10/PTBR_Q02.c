#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Calcular e escrever o valor de H, sendo H igual a:
// H = 1/1 + 1/3 + 1/9 + 1/27 + ...
// O numero de termos e lido do usuario.

int main() {
    int i, N;
    double H = 0, divisor = 1;

    printf("Digite o numero de termos: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero de termos invalido! Insira um valor positivo.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        H += 1 / divisor;
        divisor *= 3;
    }

    printf("O valor de H com %d termos e: %.10f\n", N, H);

    return 0;
}
