#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// This program asks the user to input a number between 1 (Sunday) and 7 (Saturday) and prints the corresponding day of the week.

int main() {
    int option;
    bool error;

    printf("Which day of the week do you want between 1 (Sunday) and 7 (Saturday)? ");
    printf("\nEnter a number between 1-7: ");
    scanf("%d", &option);
    error = option < 1 || option > 7;

    if (error) {
        printf("Invalid value!");
    } else {
        switch (option) {
            case 1: printf("Sunday");
                    break;
            case 2: printf("Monday");
                    break;
            case 3: printf("Tuesday");
                    break;
            case 4: printf("Wednesday");
                    break;
            case 5: printf("Thursday");
                    break;
            case 6: printf("Friday");
                    break;
            case 7: printf("Saturday");
                    break;
            default:
                    break;
        }
    }

    return 0;
}
