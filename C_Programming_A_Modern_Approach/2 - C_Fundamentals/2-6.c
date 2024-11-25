/*
Modify the program of Programming Project 5 so that the polynomial 
is evaluated using the following formula:

((((3x + 2)x – 5)x – 1)x + 7)x – 6

Note that the modified program performs fewer multiplications. 
This technique for evaluating polynomials is known as Horner’s Rule.
*/

#include <stdio.h>

int main(void) 
{
	int x = 0;
	printf("\n%s", "Enter a value for x >> ");
	scanf("%d", &x);

	int polynomial = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

	printf("%d\n", polynomial);
}

/*
Test Case 1:
    Input: x = 0
    Expected: -6
    Actual: -6

Test Case 2:
    Input: x = 1
    Expected: 0
    Actual: 0

Test Case 3:
    Input: x = -1
    Expected: -10
    Actual: -10

Test Case 4:
    Input: x = 2
    Expected: 92
    Actual: 92

Test Case 5:
    Input: x = 3
    Expected: 762
    Actual: 762

Test Case 6:
    Input: x = -2
    Expected: -48
    Actual: -48

Test Case 7:
    Input: x = 5
    Expected: 10004
    Actual: 10004

*/

