/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:

Enter a fraction: 6/12
In lowest terms: 1/2

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main(void)
{
	int gcd, numerator, denominator;

	printf("\n%s", "Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	// GCD Calculator
	// Further chapters explore the concept of fuctions
	// for now we include these instructions in main.
	// -------------------------------------------------
	int m = numerator;
	int n = denominator;

	while(1) {
		if (n == 0) {
			gcd = m;
			break;
		}
		else {
			int r = m % n;
			m = n;
			n = r;
		}
	}
	// ------------------------------------------------
	
	numerator /= gcd;
	denominator /= gcd;
	
	printf("%s%d/%d\n", "In lowest terms: ", numerator, denominator);
}
