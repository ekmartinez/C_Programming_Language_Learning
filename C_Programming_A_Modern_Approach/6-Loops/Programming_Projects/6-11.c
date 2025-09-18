/*
The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.
*/

#include <stdio.h>

unsigned long long int factorial (int number) {
	// Recursive Factorial Calculator
	if (number <= 1) { // base case
		return 1;
	}
	else { // recursive step
		   return (number * factorial(number - 1));
	}
}

float e_approximation(int n) {

	float e_apx = 1.00;	

	for (size_t c = n; c > 0; c--) {
		e_apx += (1.0 / (float)factorial(c));
	}

	return e_apx;
}

int main (void) {
	int n = 0;
	printf("%s", "Enter an integer: ");
	scanf("%d", &n);


	printf("\n%s: %f", "e Approximation", e_approximation(n));
	

	return 0;
}
