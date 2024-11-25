/*
Write a program that calculates the remaining balance on a loan after the first, 
second, and third monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Display each balance with two digits after the decimal point. 

Hint: Each month, the balance is decreased by the amount of the payment, but increased 
by the balance times the monthly interest rate. To find the monthly interest rate, convert
the interest rate entered by the user to a percentage and divide it by 12.

*/

#include <stdio.h>

int main(void) 
{
	float loanAmount = 0.00;
	printf("\n%s", "Enter amount of loan: ");
	scanf("%f", &loanAmount);

	float interestRate = 0.00;
	printf("%s", "Enter interest rate: ");
	scanf("%f", &interestRate);
	
	float monthlyPayment = 0.00;
	printf("%s", "Monthly Payment: ");
	scanf("%f", &monthlyPayment);

	float balanceFirstMonth = loanAmount + loanAmount * ((interestRate / 100) / 12) - monthlyPayment;
	printf("\n%s$%.2f\n", "Balance remaining after first payment: ", balanceFirstMonth); 

	float balanceSecondMonth = balanceFirstMonth + balanceFirstMonth * ((interestRate / 100) / 12) - monthlyPayment;
	printf("%s$%.2f\n", "Balance remaining after second payment: ", balanceSecondMonth);

	float balanceThirdMonth = balanceSecondMonth + balanceSecondMonth * ((interestRate / 100) / 12) - monthlyPayment;
	printf("%s$%.2f\n\n", "Balance remaining after first payment: ", balanceThirdMonth);
}
