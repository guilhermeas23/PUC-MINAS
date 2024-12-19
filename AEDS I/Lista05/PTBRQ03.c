#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa verifica se um ano é bissexto. Permite ao usuario verificar varios anos em sequencia.

int main() {
    int ano;
    char continuar;

    printf("Ano Bissexto.\n");

    do {
        printf("\nDigite um ano para verificar se e bissexto: ");
        scanf("%d", &ano);

        if (ano <= 0) {
            printf("O ano informado e invalido.\n");
        } else if (ano % 4 == 0) {
            if (ano % 100 == 0) {
                if (ano % 400 == 0) {
                    printf("O ano %d e bissexto.\n", ano);
                } else {
                    printf("O ano %d nao e bissexto.\n", ano);
                }
            } else {
                printf("O ano %d e bissexto.\n", ano);
            }
        } else {
            printf("O ano %d nao e bissexto.\n", ano);
        }

        printf("\nDeseja continuar? [S/N]: ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);

    } while (continuar == 'S');

    printf("\nObrigado por usar o programa.\n");

    return 0;
}
