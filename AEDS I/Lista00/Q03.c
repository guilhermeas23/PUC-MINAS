#include <stdio.h>

// ENUNCIADO:
// Converter 37,777777 graus Celsius para Fahrenheit usando a formula:
// Fahrenheit = Celsius * 1.8 + 32

int main() {
    float celsius = 37.777777;
    float fahrenheit = celsius * 1.8 + 32;  // Aplica a formula de conversao

    printf("A temperatura de %.6f graus Celsius corresponde a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
