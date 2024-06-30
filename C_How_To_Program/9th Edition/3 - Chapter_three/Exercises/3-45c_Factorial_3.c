/*
Write a program that computes the value of ex by using the formula:
e^x = 1 + x/1! + x^2/2! + x^3/3! + ...

Note: Functions are not covered until chapter 4 but we used them
here for practicality.  If functions are not used, the solution
to the problem can get a little crazy...
*/

#include <stdio.h>

int factorial(int x);
double exponentiation(double n, double c);

int main(void)
{
    int counter = 1;
    double x = .5;
    double e_x = 1.00;

    // Taylor series expansion
    while (counter <= 5) {
        e_x += exponentiation(x, counter) / factorial(counter);
        counter++;
    }
    printf("%f\n", e_x);

    return 0;
}

int factorial(int x) {
    int factor = x - 1;

    while (factor > 0) {
        x *= factor--;
    }
    return x;
}

double exponentiation(double n, double c) {
    double raised = 1.00;

    while (c > 0) {
       raised *= n;
       c--;
    }
    return raised;
}
