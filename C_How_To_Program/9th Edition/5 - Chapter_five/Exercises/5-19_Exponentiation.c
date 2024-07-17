/*
5.16 (Exponentiation) Write a function integerPower(base, exponent) that returns
the value of baseexponent For example, integerPower(3, 4) = 3 * 3 * 3 * 3.

Assume that exponent is a positive, nonzero integer, and base is an integer. Function integerPower should use a for statement to control the calculation. Do not use any math library functions.
*/

#include <stdio.h>

int integerPower(int base, int exponent);

int main(void) {

    int base = 0;
    int exponent = 0;

    printf("%s", "Enter base and exponent (space separated): ");
    scanf("%d%d", &base, &exponent);

    printf("%s%d\n", "Result: ", integerPower(base, exponent));
}

int integerPower(int base, int exponent) {
    int result = 1;

    for (;exponent > 0; exponent-- ) {
       result *= base;
    }
    return result;
}

/*
**Test Case 1:**
Expected: 9
Actual: integerPower(3, 2)

**Test Case 2:**
Expected: 27
Actual: integerPower(3, 3)

**Test Case 3:**
Expected: 81
Actual: integerPower(3, 4)

**Test Case 4:**
Expected: 625
Actual: integerPower(5, 4)

**Test Case 5:**
Expected: 1
Actual: integerPower(2, 0) (Note: exponent is 0 in this case)
*/
