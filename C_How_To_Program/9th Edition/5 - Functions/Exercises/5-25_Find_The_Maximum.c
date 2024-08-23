/*
5.25 (Find the Minimum) Write a function that returns the smallest of three
floating-point numbers.
*/

#include <stdio.h>

double minimum(double n1, double n2, double n3);

int main(void) {
    double num1 = 0.00;
    double num2 = 0.00;
    double num3 = 0.00;

    printf("\n%s", "Enter three floating-point numbers (space separated): ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    double min = minimum(num1, num2, num3);
    printf("%s%.2f\n", "The minimum is: ", min);
}

double minimum(double n1, double n2, double n3) {
    double min = n1;

    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }
    return min;
}

/*
**Test Case 1: All numbers equal**

* Input: `3.14`, `3.14`, `3.14`
* Expected output: `3.14`

**Test Case 2: One number is smaller than the others**

* Input: `0.5`, `3.0`, `4.8`
* Expected output: `0.5`

**Test Case 3: Two numbers are equal, one is larger**

* Input: `1.0`, `1.0`, `2.0`
* Expected output: `1.0`

**Test Case 4: No two numbers are equal**

* Input: `0.1`, `1.5`, `3.8`
* Expected output: `0.1`

**Test Case 5: Edge case - all negative numbers**

* Input: `-10.0`, `-5.0`, `-2.0`
* Expected output: `-10.0`

**Test Case 6: Edge case - all positive numbers**

* Input: `100.0`, `50.0`, `20.0`
* Expected output: `20.0`

*/
