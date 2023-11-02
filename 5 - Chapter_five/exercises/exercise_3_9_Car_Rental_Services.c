/*

5.9 (Car Rental Services) A car rental service charges a

minimum fee of $25.00 to rent a car for 8 hours, 
and charges an additional $5 per hour after 8 hours. 
The maximum charge per day is $50 exclusive of service tax. 
The company charges an additional $0.50 per hour as service tax. 
Assume that no car is rented for more than 72 hours at a time. 
If a car is rented for more than 24 hours, then rental is calculated on a daily basis. 

Write a program that calculates and prints the rental charges for each of
three customers who rented cars from this agency yesterday. You should enter the hours for which the
car has been rented for each customer. Your program should print the results in a neat tabular format
and should calculate and print the total of yesterday’s receipts. The program should use the function
calculateCharges to determine the charges for each customer.
*/

#include <stdio.h>

// function prototype
double calculateCharges(int hours); 

int main(void)
{
	int c1_hours = 0;
	int c2_hours = 0;
	int c3_hours = 0;

	printf("\nWelcome to Car Rental's Reporting Software!\n");
	printf("---------------------------------------------\n\n");

	for (unsigned int counter = 1; counter <= 3; ++counter) {
		
		int rent_hours = 0;

		printf("Please enter rent hours for car # %d >>> ", counter);
		scanf("%d", &rent_hours);
		
		switch(counter) {
			case 1:
				c1_hours = rent_hours;
				break;
			case 2:
				c2_hours = rent_hours;
				break;
			case 3:
				c3_hours = rent_hours;
				break;
		}
	}
	
	int total_hours = c1_hours + c2_hours + c3_hours;
	double total_charges = calculateCharges(c1_hours) + calculateCharges(c2_hours) + calculateCharges(c3_hours);

	printf("\nCar\tHours\tCharge\n"); // Header
	printf("%d\t%d\t%.2f\n", 1, c1_hours, calculateCharges(c1_hours));
	printf("%d\t%d\t%.2f\n", 2, c2_hours, calculateCharges(c2_hours));
	printf("%d\t%d\t%.2f\n", 3, c3_hours, calculateCharges(c3_hours));
	printf("TOTAL\t%d\t%.2f\n\n", total_hours, total_charges);
}

// Function Definition
double calculateCharges(int hours) {
	
	double MINIMUM_HOURS = 8;
	double MINIMUM_CHARGE = 25.00; 
	double SERVICE_TAX = 0.50;

	double preliminary_charge = 0.00;	
	double final_charge = 0.00;

	if (hours <= 8) { 

		final_charge = MINIMUM_CHARGE + (hours * SERVICE_TAX);
		
		return final_charge;
	} 

	preliminary_charge = (MINIMUM_CHARGE + (hours - MINIMUM_HOURS)

	return final_charge;
}








