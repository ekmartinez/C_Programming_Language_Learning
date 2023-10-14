/*
3.16 (Sales Tax) Sales tax is collected from buyers and remitted to the government. A retailer has to file a monthly sales tax report which lists the sales for the month and the amount of sales tax collected, at both the county and state levels. Develop a program that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax. Here is a sample input/output dialog.

*/

/*
Pseudocode

top
----

Develop a program that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state taxes.

First Refinement
-------------------------------
Initializae variables
Input month
Input Collections
Make Computations and print results.

Second Refinement
------------------------------
Initialize Collections to zero
Initialize sales to zero
Initialize county_tax to zero
Initialize state_tax to zero
Initialize total_tax = zero

while not sentinel
	Input month
	Input collections

	county_tax = sales * 5%
	state_tax = sales * 10%
	total_tax = county_tax + state_tax
	sales = collections - total_tax

	Print Results
 */

#include <stdio.h>


int main(void) {

	// Initilize Phase
	char month[100];
	int collections = 0;
	float county_rate = .05;
	float state_rate = .04;
	float county_tax = 0;
	float state_tax = 0;
	float total_tax = 0;
	float sales = 0;

	// Processing phase
	while (collections != -1) {
		printf("%s", "Enter total amount collected (-1 to quit): ");
		scanf("%d", &collections);

		printf("%s", "Enter name of month: ");
		scanf("%99s", month);

		// Termination phase
		// TODO: TAX BASED ON SALES, NEED TO SOLVE FOR SALES
		county_tax = (float) collections * county_rate;
		state_tax = (float) collections * state_rate;
		total_tax = county_tax + state_tax;
		sales = (float) collections - total_tax;


		printf("Total Collections: $%.2f\n", (float)collections);
		printf("Sales: $%.2f\n", sales);
		printf("County Sales Tax: $%.2f\n", county_tax);
		printf("State Sales Tax: $%.2f\n", state_tax);
		printf("Total Sales Tax Collected: $%.2f\n", total_tax);
	}	
}

/*
Output:

Enter total amount collected (-1 to quit): 45678
Enter name of month: January
Total Collections: $ 45678.00
Sales: $ 41906.42
County Sales Tax: $ 2095.32
State Sales Tax: $ 1676.26
Total Sales Tax Collected: $ 3771.58

Enter total amount collected (-1 to quit): 98000
Enter name of month: February
Total Collection: $ 98000
Sales: $ 89908.26
County Sales Tax: $ 4495.41
State Sales Tax: $ 3596.33
Total Sales Tax Collected: $ 8091.74
Enter total amount collected (-1 to quit): -1
*/
