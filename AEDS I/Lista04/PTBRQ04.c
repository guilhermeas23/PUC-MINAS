#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO:
// Este programa calcula o peso de uma pessoa em diferentes planetas do sistema solar.

int main() {
    float peso, resultado;
    int opcao;
    bool erro;

    printf("Informe seu peso para determinar o equivalente nos outros planetas:\n");
    printf("1. Mercurio\n");
    printf("2. Venus\n");
    printf("3. Marte\n");
    printf("4. Jupiter\n");
    printf("5. Saturno\n");
    printf("6. Urano\n");
    printf("7. Netuno\n");
    printf("Escolha um planeta:");
    scanf("%d", &opcao);
    erro = opcao < 1 || opcao > 7;

    if (erro) {
        printf("Valor invalido!");
    } else {
        printf("Digite seu peso na Terra:");
        scanf("%f", &peso);

        switch (opcao) {
            case 1:
                resultado = peso * 0.37;
                printf("Seu peso em Mercurio e %.2f", resultado);
                break;
            case 2:
                resultado = peso * 0.88;
                printf("Seu peso em Venus e %.2f", resultado);
                break;
            case 3:
                resultado = peso * 0.38;
                printf("Seu peso em Marte e %.2f", resultado);
                break;
            case 4:
                resultado = peso * 2.64;
                printf("Seu peso em Jupiter e %.2f", resultado);
                break;
            case 5:
                resultado = peso * 1.15;
                printf("Seu peso em Saturno e %.2f", resultado);
                break;
            case 6:
                resultado = peso * 1.17;
                printf("Seu peso em Urano e %.2f", resultado);
                break;
            case 7:
                resultado = peso * 1.18;
                printf("Seu peso em Netuno e %.2f", resultado);
                break;
        }
    }

    return 0;
}
