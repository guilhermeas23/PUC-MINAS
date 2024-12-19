#include <stdio.h>

// ENUNCIADO:
// Calcular a representação em Fahrenheit de uma temperatura em graus Celsius. Fahrenheit = Celsius x 1.8 + 32


int main() {
    float celsius, fahrenheit;


    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);


    float resultado = celsius * 1.8 + 32;

    // Exibir o resultado
    printf("%.2f graus Celsius eh igual a %.2f graus Fahrenheit.\n", celsius, resultado);

    return 0;
}
