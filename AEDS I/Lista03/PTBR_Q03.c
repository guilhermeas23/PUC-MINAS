#include <stdio.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Ler tres valores. Calcular e escrever o segundo maior entre os tres valores lidos.

int main() {
    float num1, num2, num3, segundoMaior;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    // Suponha que num1 é o maior inicialmente
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        segundoMaior = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        segundoMaior = num2;
    } else {
        segundoMaior = num3;
    }

    printf("O segundo maior valor e: %.2f\n", segundoMaior);

    return 0;
}
