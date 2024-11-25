/*
Write a program that asks the user to enter a dollars-and-cents amount, 
then displays the amount with 5% tax added:

Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>
#define TAX .05

int main(void) 
{
	float amount = 0;
	printf("\n%s", "Enter an amount: ");
	scanf("%f", &amount);

	float taxAdded = amount * (1 + TAX);
	printf("%s$%.2f\n\n", "With tax added: ", taxAdded);
}
