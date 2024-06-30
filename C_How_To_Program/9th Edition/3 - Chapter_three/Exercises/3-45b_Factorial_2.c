/*
Write a program that estimates the value of the mathematical constant e
by using the formula: 1 + 1/1! + 1/2! + 1/3! + ...

Note: Functions are not covered until chapter 4 but we used them
here for practicality.  If functions are not used, the solution
to the problem can get a little crazy...
*/


#include <stdio.h>

int factorial(int x);

int main(void)
{
    int counter = 1;
    double e = 1.00;

    // Taylor series expansion
    while (counter <= 10) { // more iterations = more accuracy
        e += (double)1 / factorial(counter++);
    }
    printf("%f\n", e);

    return 0;
}

int factorial(int x) {
    int factor = x - 1;

    while (factor > 0) {
        x *= factor--;
    }
    return x;
}

