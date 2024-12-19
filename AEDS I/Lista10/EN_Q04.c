#include <stdio.h>
#include <stdlib.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// Build a program that reads a sequence of ten natural numbers. 
// When the reading is finished, the program must report the average of the values read and the highest value among them.

int main() {
    int numbers[10];
    int sum = 0, highest = 0;

    for (int i = 0; i < 10; i++) {
        do {
            printf("Enter the %dth natural number: ", i + 1);
            scanf("%d", &numbers[i]);
            if (numbers[i] < 0) {
                printf("Invalid number! Please enter a natural number.\n");
            }
        } while (numbers[i] < 0);

        sum += numbers[i];
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
    }

    float average = (float)sum / 10;

    printf("The average of the values is: %.2f\n", average);
    printf("The highest value is: %d\n", highest);

    return 0;
}
