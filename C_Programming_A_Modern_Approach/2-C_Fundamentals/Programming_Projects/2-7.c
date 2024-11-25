/*
Write a program that asks the user to enter a U.S. dollar amount and then 
shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure 
to use integer values throughout, not floating-point numbers.
*/

#include <stdio.h>

int main(void)
{
	int dollarAmount = 0;
	printf("\n%s", "Enter a dollar amount: ");
	scanf("%d", &dollarAmount);

	int twentyBills = dollarAmount / 20;
	dollarAmount -= twentyBills * 20;
	printf("%s%d\n", "$20 bills: ", twentyBills); 

	int tenBills = dollarAmount / 10;
	dollarAmount -= tenBills * 10;
	printf("%s%d\n", "$10 bills: ", tenBills); 

	int fiveBills = dollarAmount / 5;
	dollarAmount -= fiveBills * 5;
	printf("%s%d\n", "$5 bills: ", fiveBills); 

	printf("%s%d\n", "$1 bills: ", dollarAmount); 
}
