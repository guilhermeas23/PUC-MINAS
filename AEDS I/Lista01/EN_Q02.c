#include <stdio.h>

//AUTHOR: GUILHERME DE ALMEIDA SANTOS

// QUESTION:
// This program reads three sides of a triangle, checks if they can form a triangle,
// and determines if the triangle is equilateral, isosceles, or scalene.
// An equilateral triangle has all three sides equal.
// An isosceles triangle has at least two equal sides.
// A scalene triangle has all sides different.

int main()
{
    float a, b, c;

    printf("Enter the value of side 1:");
    scanf("%f", &a);
    printf("Enter the value of side 2:");
    scanf("%f", &b);
    printf("Enter the value of side 3:");
    scanf("%f", &c);

    // Check if the sides can form a triangle
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        // Determine the type of triangle
        if (a == b && b == c)
        {
            printf("The triangle is equilateral.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is isosceles.\n");
        }
        else
        {
            printf("The triangle is scalene.\n");
        }
    }
    else
    {
        printf("The given values do not form a triangle.\n");
    }

    return 0;
}
