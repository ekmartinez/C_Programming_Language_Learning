/*
3.44 (Sides of a Right Triangle) Write a program that reads three nonzero integers
and determines and prints whether they could be the sides of a right triangle.
*/

/*
Pythagorean theorem = a^2 + b^2 = c^2

where c is the longest side (hypothenuse), and a & b the other two sides
*/

#include <stdio.h>

int main(void)
{
    int a, b, c = 0;
    int hypothenuse  = 0;

    printf("%s", "Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Find hypothenuse (largest value)
    if (a > hypothenuse) {
        hypothenuse = a;
    }
    if (b > hypothenuse) {
        hypothenuse = b;
    }
    if (c > hypothenuse) {
        hypothenuse = c;
    }

    // Remove duplicate value (hypothenuse and largest value)
    if (hypothenuse == a) {
        a = 0;
    }
    else if (hypothenuse == b) {
        b = 0;
    }
    else if (hypothenuse == c) {
        c = 0;
    }

    // Pythagorean theorem
    int a_side = a * a;
    int b_side = b * b;
    int c_side = c * c;
    int h_side = (hypothenuse * hypothenuse);

    if (a_side + b_side + c_side == h_side) {
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
Expected Output: "Yes, these could be the sides of a right triangle."

**Test Case 2:**
Input: 6, 8, 10
Expected Output: "Yes, these could be the sides of a right triangle."

**Test Case 3:**
Input: 1, 2, 3
Expected Output: "No, these cannot be the sides of a right triangle."

**Test Case 4:**
Input: 100, 120, 130
Expected Output: "Yes, these could be the sides of a right triangle."
*/
