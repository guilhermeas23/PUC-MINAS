#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// Enunciado:
// ordene 3 numeros

int main() {
    float num1, num2, num3;
    printf("Vamos colocar os numeros em ordem decrescente.");
    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("\nDigite um segundo numero: ");
    scanf("%f", &num2);
    printf("\nDigite um terceiro numero: ");
    scanf("%f", &num3);

    // Comparar os numeros e exibir em ordem decrescente
    if (num1 >= num2 && num2 >= num3) {
        printf("%f, %f, %f", num1, num2, num3);
    } else if (num1 >= num3 && num3 >= num2) {
        printf("%f, %f, %f", num1, num3, num2);
    } else if (num2 >= num1 && num1 >= num3) {
        printf("%f, %f, %f", num2, num1, num3);
    } else if (num2 >= num3 && num3 >= num1) {
        printf("%f, %f, %f", num2, num3, num1);
    } else if (num3 >= num1 && num1 >= num2) {
        printf("%f, %f, %f", num3, num1, num2);
    } else if (num3 >= num2 && num2 >= num1) {
        printf("%f, %f, %f", num3, num2, num1);
    } else {
        printf("%f, %f, %f", num2, num3, num1);
    }

    return 0;
}
