#include <stdio.h>

// ENUNCIADO:
// Calcular o peso ideal baseado no genero e na altura.
// Peso Ideal de pessoas de genero masculino: (72.7 * altura) - 58
// Peso Ideal de pessoas de genero feminino: (62.1 * altura) - 44.7

int main() {
    char genero;
    double altura, peso_ideal;

    printf("Informe o genero (M para masculino ou F para feminino): ");
    scanf(" %c", &genero);

    printf("Informe a altura em metros (ex: 1.75): ");
    scanf("%lf", &altura);

    if (genero == 'M' || genero == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (genero == 'F' || genero == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Genero nao reconhecido.\n");
        return 1;
    }

    printf("O peso ideal para uma pessoa de genero %c e altura %.2f m e: %.2f kg\n", genero, altura, peso_ideal);

    return 0;
}
