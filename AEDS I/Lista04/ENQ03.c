#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// This program reports how many days are in a month of the year, considering from 1 (January) to 12 (December).

int main() {
    int option;
    bool error;

    printf("Which month of the year between 1 (January) and 12 (December)? ");
    printf("\nEnter a number between 1 and 12: ");
    scanf("%d", &option);
    error = option < 1 || option > 12;

    if (error) {
        printf("Invalid value!");
    } else {
        switch (option) {
            case 1: printf("January has, 31 days");
                    break;
            case 2: printf("February has, 28 days");
                    break;
            case 3: printf("March has, 31 days");
                    break;
            case 4: printf("April has, 30 days");
                    break;
            case 5: printf("May has, 31 days");
                    break;
            case 6: printf("June has, 30 days");
                    break;
            case 7: printf("July has, 31 days");
                    break;
            case 8: printf("August has, 31 days");
                    break;
            case 9: printf("September has, 30 days");
                    break;
            case 10: printf("October has, 31 days");
                    break;
            case 11: printf("November has, 30 days");
                    break;
            case 12: printf("December has, 31 days");
                    break;
            default:
                    break;
        }
    }

    return 0;
}
