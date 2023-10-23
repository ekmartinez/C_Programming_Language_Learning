/*
4.15 (Modified Compound-Interest Program) Modify the compound-interest program of
Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop
to vary the interest rate.

Section 4.6 (Modified)
-------------
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
	printf("\n%4s%11s%11s%11s%11s%11s%11s\n", "Year", "Amount@5%", "Amount@6%", "Amount@7%", "Amount@8%", "Amount@9%", "Amount@10%");

	//calculate amount on deposit for each of ten years
	for (unsigned int year = 1; year <= 10; ++year) {
		
		// calculate new amount for specified year
		double amount_five_pct = principal * pow(1.0 + .05, year);
		double amount_six_pct = principal * pow(1.0 + .06, year);
		double amount_seven_pct = principal * pow(1.0 + .07, year);
		double amount_eight_pct = principal * pow(1.0 + .08, year);
		double amount_nine_pct = principal * pow(1.0 + .09, year);
		double amount_ten_pct = principal * pow(1.0 + .10, year);

		// output one table row
		printf("%4u%11.2f%11.2f%11.2f%11.2f%11.2f%11.2f\n", year, amount_five_pct, amount_six_pct, amount_seven_pct, amount_eight_pct, amount_nine_pct, amount_ten_pct);
	}

	printf("\n\n");

	return 0;
}

// To compile this file with a linker to math.h you should proceed as:
// gcc file.c -o file -lm
