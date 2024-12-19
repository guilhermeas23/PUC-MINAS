#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// Sort 3 numbers

int main() {
    float num1, num2, num3;
    printf("Let's put the numbers in descending order.");
    printf("\nEnter the first number: ");
    scanf("%f", &num1);
    printf("\nEnter the second number: ");
    scanf("%f", &num2);
    printf("\nEnter the third number: ");
    scanf("%f", &num3);

    // Compare the numbers and display them in descending order
    if (num1 >= num2 && num2 >= num3) {
        printf("%f, %f, %f", num1, num2, num3);
    } else if (num1 >= num3 && num3 >= num2) {
        printf("%f, %f, %f", num1, num3, num2);
    } else if (num2 >= num1 && num1 >= num3) {
        printf("%f, %f, %f", num2, num1, num3);
    } else if (num2 >= num3 && num3 >= num1) {
        printf("%f, %f, %f", num2, num3, num1);
    } else if (num3 >= num1 && num1 >= num2) {
        printf("%f, %f, %f", num3, num1, num2);
    } else if (num3 >= num2 && num2 >= num1) {
        printf("%f, %f, %f", num3, num2, num1);
    } else {
        printf("%f, %f, %f", num2, num3, num1);
    }

    return 0;
}
