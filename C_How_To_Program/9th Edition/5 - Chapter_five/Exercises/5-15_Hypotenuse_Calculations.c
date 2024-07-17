/*
5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates
a right triangle’s hypotenuse, based on the values of the other two sides. The function
should take two double arguments and return the hypotenuse as a double. Test your
program with the side values specified in the following table:

Side 1  Side 2
  3.0     4.0
  5.0    12.0
  8.0    15.0
*/

#include <stdio.h>
#include <math.h>

double hypothenuse(double a, double b);

int main(void) {
    double a = 0.00;
    double b = 0.00;

    printf("%s", "Enter sides of triangle: ");
    scanf("%lf%lf", &a, &b);

    double c = hypothenuse(a, b);
    printf("%s%.1f\n", "hypothenuse: ", c);
}

double hypothenuse(double a, double b) {
    // Pythagorean Theorem
    // = a^2 + b^2 = c^2 | c = √(a^2 + b^2)
    return sqrt(pow(a, 2) + pow(b, 2));
}

