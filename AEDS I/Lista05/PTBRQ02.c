#include <stdio.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Construa um programa que escreva na tela do monitor de video os números inteiros de dez até um (ordem decrescente). Utilize estrutura de repetição com teste no final.

int main() {
    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}
