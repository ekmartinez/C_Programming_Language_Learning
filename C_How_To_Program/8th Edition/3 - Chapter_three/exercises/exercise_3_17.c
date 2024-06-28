/*
3.17 (Mortgage Calculator) Develop a C program to calculate the interest accrued on a bank customer's mortgage. 

For each customer, the following facts are available:

a) the account number
b) the mortgage amount
c) the mortgage term
d) the interest rate

The program should input each fact, calculate the total

interest payable = mortgage amount × interest rate × mortgage term), and add it to the mortgage amount to get the total amount payable.

It should calculate the required monthly payment by dividing the total amount payable by the number of months in the mortgage term.

The program should display the required monthly payment rounded off to the nearest dollar. The program should process each customer's account at a
time.

*/

/*
Pseudcode
---------

top
---
Develop a C program to calculate the interest accrued on a bank customer's mortgage and print the monthly payment. 

First Refinement
-----------------
Initialize Varibles
Ask for inputs and determine monthly mortgage payable.
Print monthly mortgage payable

Second Refinement
------------------
Initialize account number to zero
Initialize mortgage amount to zero
Initialize mortgage_term to zero
Inititalize interest_rate to zero
Initialize mortgage_payable to zero

While not sentinel
	Ask for account
	Ask for total mortgage
	Ask for mortgage_term
	Ask for the interest rate
	Compute monthly mortgage payable
	Print results
*/

#include <stdio.h>

int main(void)
{
	// Initialization phase
	int account_number = 0;
	int mortgage_amount = 0;
	int mortgage_term = 0;
	float interest_rate = 0;
	float interest_payable = 0;
	float mortgage_payable = 0;
	float monthly_payment = 0;
	
	// Processing phase
	while (account_number != -1) {
		printf("%s", "\nEnter account number (-1 to end):");
		scanf("%d", &account_number);

		if (account_number == -1) {
			break;
		}
		else {
					
			printf("%s", "Enter mortgage amount (in dollars): ");
			scanf("%d", &mortgage_amount);

			printf("%s", "Enter mortgage term (in years): ");
			scanf("%d", &mortgage_term);

			printf("%s", "Enter interest rate (as a decimal): ");
			scanf("%f", &interest_rate);
		
			interest_payable = mortgage_amount * interest_rate * mortgage_term; // simple interest
			mortgage_payable = mortgage_amount + interest_payable;
			monthly_payment = mortgage_payable / (mortgage_term * 12);

			// Termination phase
			// The execise asks for int result, this returns float.
			printf("The monthly payable interest is: $ %f\n", monthly_payment);
		}
	}

	return 0;
}

/*
 
Test:

Enter account number (-1 to end): 100
Enter mortgage amount (in dollars): 6500
Enter mortgage term (in years): 3
Enter interest rate (as a decimal): 0.075
The monthly payable interest $ 221

Enter account number (-1 to end): 200
Enter mortgage amount (in dollars): 12000
Enter mortgage term (in years): 10
Enter interest rate (as a decimal): 0.045
The monthly payable interest is: $ 145
Enter account number (-1 to end): -1





*/


