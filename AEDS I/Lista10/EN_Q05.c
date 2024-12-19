#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Build a program that reads a sequence of natural numbers, stopping when the value zero is entered.
// The program should report the average of the values read and the highest value among them, disregarding zero.

int main() {
    int number, sum = 0, highest = 0, count = 0;

    while (1) {
        printf("Enter a natural number (0 to finish): ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        if (number < 0) {
            printf("Invalid number! Please enter a natural number.\n");
            continue;
        }

        sum += number;
        count++;

        if (number > highest) {
            highest = number;
        }
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("The average of the values is: %.2f\n", average);
        printf("The highest value is: %d\n", highest);
    } else {
        printf("No valid values were entered.\n");
    }

    return 0;
}
