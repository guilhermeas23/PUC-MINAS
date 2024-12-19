#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// This program calculates a person's weight on different planets in the solar system.

int main() {
    float weight, result;
    int choice;
    bool error;

    printf("Enter your weight to find the equivalent on other planets:\n");
    printf("1. Mercury\n");
    printf("2. Venus\n");
    printf("3. Mars\n");
    printf("4. Jupiter\n");
    printf("5. Saturn\n");
    printf("6. Uranus\n");
    printf("7. Neptune\n");
    printf("Choose a planet:");
    scanf("%d", &choice);
    error = choice < 1 || choice > 7;

    if (error) {
        printf("Invalid value!");
    } else {
        printf("Enter your weight on Earth:");
        scanf("%f", &weight);

        switch (choice) {
            case 1:
                result = weight * 0.37;
                printf("Your weight on Mercury is %.2f", result);
                break;
            case 2:
                result = weight * 0.88;
                printf("Your weight on Venus is %.2f", result);
                break;
            case 3:
                result = weight * 0.38;
                printf("Your weight on Mars is %.2f", result);
                break;
            case 4:
                result = weight * 2.64;
                printf("Your weight on Jupiter is %.2f", result);
                break;
            case 5:
                result = weight * 1.15;
                printf("Your weight on Saturn is %.2f", result);
                break;
            case 6:
                result = weight * 1.17;
                printf("Your weight on Uranus is %.2f", result);
                break;
            case 7:
                result = weight * 1.18;
                printf("Your weight on Neptune is %.2f", result);
                break;
        }
    }

    return 0;
}
