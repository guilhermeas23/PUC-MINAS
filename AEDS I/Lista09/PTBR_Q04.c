#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Ler um numero natural e verificar se e primo ou nao. Um numero natural e primo se e divisivel apenas por um e por si proprio.

int main() {
    int numero, i, primo = 1;

    do {
        printf("Digite um numero natural: ");
        scanf("%d", &numero);
        if (numero <= 0) {
            printf("Numero invalido! Insira um numero natural.\n");
        }
    } while (numero <= 0);

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo && numero != 1) {
        printf("O numero %d e primo.\n", numero);
    } else {
        printf("O numero %d nao e primo.\n", numero);
    }

    return 0;
}
