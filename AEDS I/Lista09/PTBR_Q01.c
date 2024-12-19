#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa calcula a media de numeros inteiros inseridos pelo usuario. A entrada de dados encerra quando o valor zero e digitado.

int main() {
    int numeros, soma = 0, c = 0;
    const int flag = 0; // Flag para encerrar o loop
    float media;

    printf("\nMedia dos numeros inteiros. Digite zero para encerrar.\n");

    do {
        printf("\nDigite um numero: ");
        scanf("%d", &numeros);

        if (numeros != flag) {
            soma += numeros;
            c++;
        }
    } while (numeros != flag);

    if (c > 0) {
        media = (float)soma / c;
        printf("A media dos numeros e: %.2f\n", media);
    } else {
        printf("\nValores invalidos! Tente novamente.\n");
    }

    return 0;
}
