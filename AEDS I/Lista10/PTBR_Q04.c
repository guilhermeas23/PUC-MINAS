#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Construa um programa que leia uma sequencia de dez numeros naturais.
// Ao interromper a leitura, o programa devera informar a media dos valores lidos e o maior valor entre eles.

int main() {
    int numeros[10];
    int soma = 0, maior = 0;

    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite o %d.o numero natural: ", i + 1);
            scanf("%d", &numeros[i]);
            if (numeros[i] < 0) {
                printf("Numero invalido! Insira um numero natural.\n");
            }
        } while (numeros[i] < 0);

        soma += numeros[i];
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    float media = (float)soma / 10;

    printf("A media dos valores lidos e: %.2f\n", media);
    printf("O maior valor lido e: %d\n", maior);

    return 0;
}
