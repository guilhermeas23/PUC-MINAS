#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa calcula a potenciacao de forma iterativa. A base e o expoente sao fornecidos pelo usuario.
// A base deve ser um valor real e o expoente deve ser um inteiro positivo ou zero.

int main() {
    float base, resultado = 1;
    int expoente, i;

    
    printf("Digite a base (valor real): ");
    scanf("%f", &base);

    
    do {
        printf("Digite o expoente (inteiro positivo ou zero): ");
        scanf("%d", &expoente);
        if (expoente < 0) {
            printf("Expoente invalido! Por favor, insira um numero inteiro positivo ou zero.\n");
        }
    } while (expoente < 0);

    
    for (i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("O resultado de %.2f elevado a %d e: %.2f\n", base, expoente, resultado);

    return 0;
}
