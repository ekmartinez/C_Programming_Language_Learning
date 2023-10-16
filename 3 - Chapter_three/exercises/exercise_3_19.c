/*
3.19
(Interest Calculator) The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the
division by 365 (days). Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula.
*/

/*
Pseudocode
-----------

top
----
Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan,

First Refinement
----------------
Initialize Variables
Ask for inputs
Process inputs
Print Results

Second Refinement
-----------------

//Initialization Phase
initialize loan principal to zero
initialize interest rate to zero
initialize loan term days to zero
initialize interest charge to zero

// Processing Phase
while (not sentinel)
	ask for loan principal
	ask for interest rate
	ask for loan term days

	interest charge = loan principal x interest x loan term days / 365 

	//Termination Phase
	Print interest charge
*/

#include <stdio.h>

int main(void) 
{
	// Initialization Phase
	float loan_principal = 0;
	float interest_rate = 0;
	int loan_term_days = 0;
	float interest_charge = 0;

	// Processing Phase
	while(loan_principal != -1) {
		printf("%s", "\nEnter loan principal (-1 to end): ");
		scanf("%f", &loan_principal);

		if (loan_principal == - 1){
			puts("\nProgram has ended!");
			break;
		}
		else {
		printf("%s", "Enter interest rate: ");
		scanf("%f", &interest_rate);
		
		printf("%s", "Enter term of the loan in days: ");
		scanf("%d", &loan_term_days);

		interest_charge = loan_principal * interest_rate * loan_term_days / 365; 

		// Termination Phase
		printf("The interest charge is $%.2f", interest_charge);

		}

	}
}

/*
Test:

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .08375
Enter term of the loan in days: 224
The interest charge is $51.40

Enter loan principal (-1 to end): -1
*/
