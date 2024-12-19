#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Calcular e escrever os dez primeiros termos da sequencia abaixo:
// 10/100, 99/11, 12/98, 97/13, 14/96, ...

int main() {
    int numeradores[] = {10, 99, 12, 97, 14, 95, 16, 93, 18, 91};
    int denominadores[] = {100, 11, 98, 13, 96, 15, 94, 17, 92, 19};
    int termos = 10;

    for (int i = 0; i < termos; i++) {
        printf("%d/%d\n", numeradores[i], denominadores[i]);
    }

    return 0;
}
