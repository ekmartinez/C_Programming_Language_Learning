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

	sales = collections / (1 + county_rate + state_rate)
	county_tax = sales * 5%
	state_tax = sales * 10%
	total_tax = county_tax + state_tax

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
		// Program exit is not working properly
		printf("%s", "\nEnter total amount collected (-1 to quit): ");
		scanf("%d", &collections);

		printf("%s", "Enter name of month: ");
		scanf("%99s", month);
		
		sales = (float)collections / (1 + county_rate + state_rate); 
		county_tax = sales * county_rate;
		state_tax = sales * state_rate;
		total_tax = county_tax + state_tax;

		// Termination phase
		printf("Total Collections: $%.2f\n", (float)collections);
		printf("Sales: $%.2f\n", sales);
		printf("County Sales Tax: $%.2f\n", county_tax);
		printf("State Sales Tax: $%.2f\n", state_tax);
		printf("Total Sales Tax Collected: $%.2f\n", total_tax);
	}	
}

