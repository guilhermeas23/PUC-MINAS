#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Este programa verifica se a soma de dois valores (a e b) é menor que um terceiro valor (c).

int main() {
    float a, b, c;
    printf("Digite o valor a:");
    scanf("%f", &a);
    printf("Digite o valor b:");
    scanf("%f", &b);
    printf("Digite o valor c:");
    scanf("%f", &c);

    if (a + b < c) {
        printf("O valor de a+b e menor do que c.");
    } else {
        printf("O valor de a+b nao e menor do que c.");
    }

    return 0;
}
