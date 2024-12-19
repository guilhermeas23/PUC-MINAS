#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Construa uma calculadora usando switch case

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Saida do programa:");
    printf("\n1-Adicao");
    printf("\n2-Subtracao");
    printf("\n3-Multiplicacao");
    printf("\n4-Divisao");
    printf("\nEscolha uma operacao para processar:");
    scanf("%d", &opcao);

    printf("\nDigite o primeiro valor:");
    scanf("%f", &num1);
    printf("\nDigite o segundo valor:");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("O resultado e %.2f", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("O resultado e %.2f", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("O resultado e %.2f", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado e %.2f", resultado);
            } else {
                printf("Erro: Divisao por zero");
            }
            break;
        default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}
