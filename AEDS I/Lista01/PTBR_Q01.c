#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Calcular o peso ideal de uma pessoa baseado no gênero e altura.
// Peso ideal para gênero masculino: (72.7 x altura) - 58
// Peso ideal para gênero feminino: (62.1 x altura) - 44.7

int main() {
    float peso_ideal, altura;
    char sexo;

    printf("Vamos calcular seu peso ideal.\n\n");
    printf("Digite seu sexo [M/F]: ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);

    if (sexo == 'M') {
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        peso_ideal = 72.7 * altura - 58;
        printf("Seu peso ideal e %.2f kg", peso_ideal);
    } else if (sexo == 'F') {
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        peso_ideal = 62.1 * altura - 44.7;
        printf("Seu peso ideal e %.2f kg", peso_ideal);
    } else {
        printf("\nCalculo invalido! Tente novamente");
    }

    return 0;
}
