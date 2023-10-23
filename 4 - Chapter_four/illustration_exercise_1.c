/*
A person invests $1000.00 in a savings account yielding 5% interest. Assuming that
all interest is left on deposit in the account, calculate and print the amount of money
in the account at the end of each year for 10 years. Use the following formula for
determining these amounts:

a = p(1 + r)n

Where:
p is the original amount invested (i.e., the principal)
r is the annual interest rate (for example, .05 for 5%)
n is the number of years
a is the amount on deposit at the end of the nth year.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{

	double principal = 1000.00; // starting principal
	double rate = .05; // annual interest rate

	// output table column heads
	printf("%4s%21s\n", "Year", "Amount on deposit");

	//calculate amount on deposit for each of ten years
	for (unsigned int year = 1; year <= 10; ++year) {
		
		// calculate new amount for specified year
		double amount = principal * pow(1.0 + rate, year);

		// output one table row
		printf("%4u%21.2f\n", year, amount);
	}

	return 0;
}

// To compile this file with a linker to math.h you should proceed as:
// gcc file.c -o file -lm
