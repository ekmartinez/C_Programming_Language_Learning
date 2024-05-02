/*
  Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder.
 */

#include <stdio.h>

int main(void) {
	
	// Take input from the user
	int first_number = 0;
	int second_number = 0;
	
	printf("%s", "Enter two numbers (Largest first): ");
	scanf("%d%d", &first_number, &second_number);
	
	// Perform calculations
	int sum = first_number + second_number;
	int product = first_number * second_number;
	int difference = first_number - second_number;
	int quotient = first_number / second_number;
	int remainder = first_number % second_number;

	// Output Results
    printf("\nSummary Arithmethics\n");
    printf("---------------------\n");
	printf("Sum: %d\n", sum);
	printf("Product: %d\n", product);
	printf("Difference: %d\n", difference);
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);
    printf("---------------------\n");

	return 0;
}
