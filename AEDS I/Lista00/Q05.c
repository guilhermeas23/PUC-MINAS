#include <stdio.h>
#include <math.h>

// ENUNCIADO:
// Calcular a area de um circulo com base no raio lido


int main() {
    float raio;
    printf("digite o raio do circulo:");
    scanf("%f", &raio);

    float resultado = M_PI * raio * raio;
    printf("Resultado: %f", resultado );

    return 0;
}
