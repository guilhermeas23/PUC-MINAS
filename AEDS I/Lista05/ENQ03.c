#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// STATEMENT:
// This program checks if a year is a leap year. It allows the user to check multiple years in sequence.

int main() {
    int year;
    char continueProgram;

    printf("Leap Year Checker.\n");

    do {
        printf("\nEnter a year to check if it is a leap year: ");
        scanf("%d", &year);

        if (year <= 0) {
            printf("The year entered is invalid.\n");
        } else if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    printf("The year %d is a leap year.\n", year);
                } else {
                    printf("The year %d is not a leap year.\n", year);
                }
            } else {
                printf("The year %d is a leap year.\n", year);
            }
        } else {
            printf("The year %d is not a leap year.\n", year);
        }

        printf("\nDo you want to continue? [Y/N]: ");
        scanf(" %c", &continueProgram);
        continueProgram = toupper(continueProgram);

    } while (continueProgram == 'Y');

    printf("\nThank you for using the program.\n");

    return 0;
}
