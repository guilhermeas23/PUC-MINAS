#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// Calculate the ideal weight of a person based on gender and height.
// Ideal weight for male gender: (72.7 x height) - 58
// Ideal weight for female gender: (62.1 x height) - 44.7

int main() {
    float ideal_weight, height;
    char gender;

    printf("Let's calculate your ideal weight.\n\n");
    printf("Enter your gender [M/F]: ");
    scanf(" %c", &gender);
    gender = toupper(gender);

    if (gender == 'M') {
        printf("Enter your height in meters: ");
        scanf("%f", &height);
        ideal_weight = 72.7 * height - 58;
        printf("Your ideal weight is %.2f kg", ideal_weight);
    } else if (gender == 'F') {
        printf("Enter your height in meters: ");
        scanf("%f", &height);
        ideal_weight = 62.1 * height - 44.7;
        printf("Your ideal weight is %.2f kg", ideal_weight);
    } else {
        printf("\nInvalid calculation! Please try again.");
    }

    return 0;
}
