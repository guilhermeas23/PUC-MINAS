#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// This program calculates the average of integers entered by the user. The input ends when the value zero is entered.

int main() {
    int numbers, sum = 0, count = 0;
    const int flag = 0; 
    float average;

    printf("\nAverage of integers. Enter zero to stop.\n");

    do {
        printf("\nEnter a number: ");
        scanf("%d", &numbers);

        if (numbers != flag) {
            sum += numbers;
            count++;
        }
    } while (numbers != flag);

    if (count > 0) {
        average = (float)sum / count;
        printf("The average of the numbers is: %.2f\n", average);
    } else {
        printf("\nInvalid values! Try again.\n");
    }

    return 0;
}
