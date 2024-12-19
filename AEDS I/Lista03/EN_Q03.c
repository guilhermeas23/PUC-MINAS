#include <stdio.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// Read three values. Calculate and write the second largest among the three values read.

int main() {
    float num1, num2, num3, secondLargest;

    printf("Enter the first value: ");
    scanf("%f", &num1);
    printf("Enter the second value: ");
    scanf("%f", &num2);
    printf("Enter the third value: ");
    scanf("%f", &num3);

    // Assume num1 is the largest initially
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        secondLargest = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        secondLargest = num2;
    } else {
        secondLargest = num3;
    }

    printf("The second largest value is: %.2f\n", secondLargest);

    return 0;
}
