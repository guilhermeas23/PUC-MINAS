#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa é uma calculadora simples que permite ao usuário realizar operações aritméticas básicas.

int main() {
    int opcao;
    float num1, num2, resultado;
    bool erro;

    printf("Calculadora\n");
    printf("\nSaida do programa");
    printf("\n1-Adicao");
    printf("\n2-Subtracao");
    printf("\n3-Multiplicacao");
    printf("\n4-Divisao");

    do {
        printf("\nEscolha uma operacao para processar:");
        scanf("%d", &opcao);
        erro = opcao < 1 || opcao > 4;
        if (erro) printf("Valor invalido");
    } while (erro);

    if (opcao != 0) {
        printf("\nDigite o primeiro numero:");
        scanf("%f", &num1);
        printf("\nDigite o segundo numero:");
        scanf("%f", &num2);
    }

    switch (opcao) {
        case 0:
            printf("Operacao nao e possivel");
            break;
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            resultado = num1 / num2;
            break;
    }

    printf("%.2f", resultado);

    while (opcao != 0);

    return 0;
}
