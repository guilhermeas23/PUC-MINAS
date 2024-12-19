#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// STATEMENT:
// This program calculates the average score of a class, identifies the highest and lowest scores, and determines whether students passed or failed.

int main() {
    int students;
    float grade, sum = 0, highest = 0, lowest = 100;
    bool error;

    printf("Enter the number of students in the class: ");
    scanf("%d", &students);

    do {
        do {
            printf("Enter the student's grade: ");
            scanf("%f", &grade);
            error = grade < 0 || grade > 100;
            if (error) printf("Invalid grade! Enter a grade between 0 and 100.\n");
        } while (error);

        sum += grade;
        if (grade > highest) highest = grade;
        if (grade < lowest) lowest = grade;
        students--;

        if (grade >= 60) 
            printf("\nPASSED\n");
        else 
            printf("\nFAILED\n");

    } while (students > 0);

    float average = sum / (students + 1); 
    printf("\nThe class average score is: %.2f\n", average);
    printf("The highest score in the class is: %.2f\n", highest);
    printf("The lowest score in the class is: %.2f\n", lowest);

    return 0;
}
