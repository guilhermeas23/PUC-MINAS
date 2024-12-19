#include <math.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// ENUNCIADO
// construir um menu que realize operacoes aritmeticas de dois valores
int main() {
    float opcao, num1, num2, resultado;

    printf("Calculadora\n");
    printf("-----------\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite sua opcao:");
    scanf("%f", &opcao);

    if (opcao == 1) {
        printf("Digite um valor:");
        scanf("%f", &num1);
        printf("Digite um segundo valor:");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("Resultado da soma e: %.1f", resultado);
    } else if (opcao == 2) {
        printf("Digite um valor:");
        scanf("%f", &num1);
        printf("Digite um segundo valor:");
        scanf("%f", &num2);
        resultado = num1 - num2;
        printf("Resultado da subtracao e: %.1f", resultado);
    } else if (opcao == 3) {
        printf("Digite um valor:");
        scanf("%f", &num1);
        printf("Digite um segundo valor:");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("Resultado da multiplicacao e: %.1f", resultado);
    } else if (opcao == 4) {
        printf("Digite um valor:");
        scanf("%f", &num1);
        printf("Digite um segundo valor:");
        scanf("%f", &num2);
        if (num2 == 0) {
            printf("Erro: Divisao por zero");
        } else {
            resultado = num1 / num2;
            printf("Resultado da divisao e: %.1f", resultado);
        }
    } else {
        printf("Opcao invalida!");
    }

    return 0;
}
