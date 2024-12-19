#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// Enunciado: Este programa calcula as raizes de uma equacao do segundo grau da forma ax^2 + bx + c = 0

int main() {
    float x1, x2, delta, a, b, c;

    printf("Equacao de segundo grau\n");
    printf("\nDigite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;

    if (delta < 0) {
        printf("A equacao nao tem raizes reais");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raizes da funcao quadratica sao %.2f e %.2f", x1, x2);
    }

    return 0;
}
