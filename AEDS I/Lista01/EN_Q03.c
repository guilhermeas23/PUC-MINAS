#include <stdio.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// Code to check if a year is a leap year
int main() {
    int year;

    printf("Enter a year to check if it is a leap year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
