#include <stdio.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// codigo para verificar se um ano é bissexto
int main() {
    int ano;

    printf("Digite um ano para verificar se e bissexto: ");
    scanf("%d", &ano);

    // Verificar se o ano é bissexto
    if ((ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}
