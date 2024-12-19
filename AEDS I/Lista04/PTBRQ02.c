#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

//ENUNCIADO
//ler um valor de 1 a 7 correspondente aos dias da semana
int main() {
    int opcao;
    bool erro;

    printf("Voce quer qual o dia da semana entre 1 (domingo) e 7 (sabado) ");
    printf("\nDigite um numero entre 1-7: ");
    scanf("%d", &opcao);
    erro = opcao < 1 || opcao > 7;

    if (erro) {
        printf("Valor invalido!");
    } else {
        switch (opcao) {
            case 1: printf("Domingo");
                    break;
            case 2: printf("Segunda");
                    break;
            case 3: printf("Terca");
                    break;
            case 4: printf("Quarta");
                    break;
            case 5: printf("Quinta");
                    break;
            case 6: printf("Sexta");
                    break;
            case 7: printf("Sabado");
                    break;
            default:
                    break;
        }
    }

    return 0;
}
