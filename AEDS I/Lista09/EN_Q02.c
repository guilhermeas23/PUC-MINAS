#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// QUESTION:
// This program identifies the profile of a class based on gender and age. Input ends with age equal to -1.
// Calculates:
// - Percentage of men and women
// - Percentage of adult students
// - Age of the oldest and youngest student

int main() {
    int age, totalStudents = 0, totalMen = 0, totalWomen = 0, adults = 0;
    int oldestAge = 0, youngestAge = 100;
    char gender;

    do {
      
        printf("\nEnter the student's age (-1 to stop): ");
        scanf("%d", &age);

        if (age == -1) break;

        if (age < 0 || age > 100) {
            printf("Invalid age! Enter an age between 0 and 100.\n");
            continue;
        }

        do {
            printf("Enter the student's gender (m/f): ");
            scanf(" %c", &gender);
            gender = tolower(gender);
            if (gender != 'm' && gender != 'f') {
                printf("Invalid gender! Enter 'm' for male or 'f' for female.\n");
            }
        } while (gender != 'm' && gender != 'f');

       
        totalStudents++;
        if (gender == 'm') {
            totalMen++;
        } else if (gender == 'f') {
            totalWomen++;
        }

        if (age >= 18) {
            adults++;
        }

        if (age > oldestAge) {
            oldestAge = age;
        }

        if (age < youngestAge) {
            youngestAge = age;
        }

    } while (1);

    
    float percentMen = (totalMen / (float)totalStudents) * 100;
    float percentWomen = (totalWomen / (float)totalStudents) * 100;
    float percentAdults = (adults / (float)totalStudents) * 100;

    
    printf("\nCLASS PROFILE RESULTS\n");
    printf("Total students: %d\n", totalStudents);
    printf("Percentage of men: %.2f%%\n", percentMen);
    printf("Percentage of women: %.2f%%\n", percentWomen);
    printf("Percentage of adults: %.2f%%\n", percentAdults);
    printf("Age of the oldest student: %d\n", oldestAge);
    printf("Age of the youngest student: %d\n", youngestAge);

    return 0;
}
