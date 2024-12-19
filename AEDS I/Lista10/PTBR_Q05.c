#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Construa um programa que leia uma sequencia de numeros naturais, finalizando quando o valor zero for lido.
// O programa devera informar a media dos valores lidos e o maior valor entre eles, desconsiderando o zero.

int main() {
    int numero, soma = 0, maior = 0, contador = 0;

    while (1) {
        printf("Digite um numero natural (0 para finalizar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero < 0) {
            printf("Numero invalido! Insira um numero natural.\n");
            continue;
        }

        soma += numero;
        contador++;

        if (numero > maior) {
            maior = numero;
        }
    }

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A media dos valores lidos e: %.2f\n", media);
        printf("O maior valor lido e: %d\n", maior);
    } else {
        printf("Nenhum valor valido foi inserido.\n");
    }

    return 0;
}
