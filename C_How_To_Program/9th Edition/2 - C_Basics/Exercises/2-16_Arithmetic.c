/*
 2.16 (Arithmetic) Write a program that reads two integers from the user
 then displays their sum, product, difference, quotient and remainder.
 */

#include <stdio.h>

int main(void)
{
    int first_integer = 0;
    int second_integer = 0;

    printf("\n%s", "Enter two integers >>> ");
    scanf("%d %d", &first_integer, &second_integer);

    int sum = first_integer + second_integer;
    int product = first_integer * second_integer;
    int difference = first_integer - second_integer;
    int quotient = first_integer / second_integer;
    int remainder = first_integer % second_integer;

    printf("\n%22s", "Summary Arithmetics\n");
    printf("%20s", "-------------------------\n");
    printf("%14s%4d\n", "Sum: ", sum);
    printf("%14s%4d\n", "Product: ", product);
    printf("%14s%4d\n", "Difference: ", difference);
    printf("%14s%4d\n", "Quotient: ", quotient);
    printf("%14s%4d\n", "Remainder ", remainder);
    printf("%20s\n", "-------------------------");

    return 0;
}


/*
**Test Case 1:**

* Input: `2` and `3`
* Expected Results:
	+ Sum: `5`
	+ Product: `6`
	+ Difference: `-1`
	+ Quotient: `0`
	+ Remainder: `2`

**Test Case 2:**

* Input: `10` and `5`
* Expected Results:
	+ Sum: `15`
	+ Product: `50`
	+ Difference: `5`
	+ Quotient: `2`
	+ Remainder: `0`

**Test Case 3:**

* Input: `7` and `-4`
* Expected Results:
	+ Sum: `3`
	+ Product: `-28`
	+ Difference: `-11`
	+ Quotient: `-1`
	+ Remainder: `3`

*/
