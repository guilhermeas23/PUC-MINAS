#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Este programa informa quantos dias tem um mes do ano, considerando de 1 (Janeiro) a 12 (Dezembro).

int main() {
    int opcao;
    bool erro;

    printf("Informe qual o mes do ano entre 1 (Janeiro) e 12 (Dezembro): ");
    printf("\nDigite um numero entre 1 e 12: ");
    scanf("%d", &opcao);
    erro = opcao < 1 || opcao > 12;

    if (erro) {
        printf("Valor invalido!");
    } else {
        switch (opcao) {
            case 1: printf("Janeiro possui, 31 dias");
                    break;
            case 2: printf("Fevereiro possui, 28 dias");
                    break;
            case 3: printf("Marco possui, 31 dias");
                    break;
            case 4: printf("Abril possui, 30 dias");
                    break;
            case 5: printf("Maio possui, 31 dias");
                    break;
            case 6: printf("Junho possui, 30 dias");
                    break;
            case 7: printf("Julho possui, 31 dias");
                    break;
            case 8: printf("Agosto possui, 31 dias");
                    break;
            case 9: printf("Setembro possui, 30 dias");
                    break;
            case 10: printf("Outubro possui, 31 dias");
                    break;
            case 11: printf("Novembro possui, 30 dias");
                    break;
            case 12: printf("Dezembro possui, 31 dias");
                    break;
            default:
                    break;
        }
    }

    return 0;
}
