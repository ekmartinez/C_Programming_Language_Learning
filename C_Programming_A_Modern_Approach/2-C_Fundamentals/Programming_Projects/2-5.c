/*
Write a program that asks the user to enter a value for x and 
then displays the value of the following polynomial:
3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6
*/

#include <stdio.h>

int main(void) 
{
	int x = 0;
	printf("\n%s", "Enter a value for x >> ");
	scanf("%d", &x);

	int polynomial = (3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) + (7*x) - 6;
	printf("%d\n", polynomial);
}

/*
Test Cases:

Test Case 1:
    Input: x = 0
    Expected Output: −6
    Actual Output: -6

Test Case 2:
    Input: x = 1
    Expected Output: 0
    Actual Output: 0

Test Case 3:
    Input: x = −1
    Expected Output: −10
    Actual Output: -10

Test Case 4:
    Input: x = 2
    Expected Output: 92
    Actual Output: 92

Test Case 5:
    Input: x = −2
    Expected Output: −48
    Actual Output: -48
*/
