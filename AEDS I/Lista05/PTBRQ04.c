#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa calcula e exibe os termos de uma progressao aritmetica (P.A.) com base no primeiro termo, razao, e quantidade de termos desejada.

int main() {
    printf("Termos da Progressao Aritmetica\n");
    float num1, razao;
    int N;

    printf("\nDigite o 1.o termo: ");
    scanf("%f", &num1);

    printf("\nDigite a razao da P.A.: ");
    scanf("%f", &razao);

    do {
        printf("Quantidade de termos desejados: ");
        scanf("%d", &N);
    } while (N < 1);

    do {
        printf("%.2f, ", num1);
        num1 = num1 + razao;
        N--;
    } while (N > 0);

    return 0;
}
