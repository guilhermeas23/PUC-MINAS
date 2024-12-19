#include <stdio.h>

//AUTOR: GUILHERME DE ALMEIDA SANTOS

// Enunciado:
// Este programa le tres lados de um triangulo, verifica se eles podem formar um triangulo,
// e determina se o triangulo e equilatero, isoscele ou escaleno.
// Um triangulo equilatero tem todos os tres lados iguais.
// Um triangulo isoscele tem pelo menos dois lados iguais.
// Um triangulo escaleno tem todos os lados diferentes.

int main()
{
    float a, b, c;

    printf("Digite o valor do lado 1:");
    scanf("%f", &a);
    printf("Digite o valor do lado 2:");
    scanf("%f", &b);
    printf("Digite o valor do lado 3:");
    scanf("%f", &c);


    // Verificar se os lados podem formar um triangulo
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        // Determinar o tipo de triangulo
        if (a == b && b == c)
        {
            printf("O triangulo e equilatero.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("O triangulo e isoscele.\n");
        }
        else
        {
            printf("O triangulo e escaleno.\n");
        }
    }
    else
    {
        printf("Os valores fornecidos nao podem formar um triangulo.\n");
    }

    return 0;
}
