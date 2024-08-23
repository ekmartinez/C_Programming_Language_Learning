/*
3.43 (Sides of a Triangle) Write a program that reads three nonzero integer values
and determines and prints whether they could represent the sides of a triangle.
*/

/*
Triangle Inequality Theorem
---------------------------

1. a + b > c
2. b + c > a
3. c + a > b

*/

#include <stdio.h>

int main(void)
{
    int a, b, c = 0;

    int triangle_indicator = 0;

    printf("%s", "Enter three non zero integers to see if they could form the sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c) {
        triangle_indicator++;
    }
    if (b + c > a) {
        triangle_indicator++;
    }
    if (c + a > b) {
        triangle_indicator++;
    }

    if (triangle_indicator == 3) {
        puts("The integers satisfy the conditions required for three sides to form a triangle.");
    }
    else {
        puts("The integers do not satisfy the conditions required for three sides to form a triangle.");
    }

    return 0;
}

/*
**Test Case 1:**
Input: 3, 4, 5
Expected Output: Yes (These values form a valid triangle)

**Test Case 2:**
Input: 10, 20, 30
Expected Output: No (One side is greater than the sum of the other two sides, violating the triangle inequality)

**Test Case 3:**
Input: 5, 5, 1
Expected Output: Yes (These values form a valid triangle)

**Test Case 4:**
Input: 7, 8, 9
Expected Output: Yes (These values form a valid triangle)

**Test Case 5:**
Input: 2, 3, 100
Expected Output: No (One side is much longer than the other two sides, violating the triangle inequality)
*/
