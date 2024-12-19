#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Este programa recebe tres valores e determina qual deles e o maior.

int main() {
    float a, b, c, maior;
    printf("Digite um primeiro valor:");
    scanf("%f", &a);
    printf("Digite um segundo valor:");
    scanf("%f", &b);
    printf("Digite um terceiro valor:");
    scanf("%f", &c);

    if (a > b && a > c) {
        printf("O maior valor e %f", a);
    } else if (b > a && b > c) {
        printf("O maior valor e %f", b);
    } else {
        printf("O maior valor e %f", c);
    }

    return 0;
}
