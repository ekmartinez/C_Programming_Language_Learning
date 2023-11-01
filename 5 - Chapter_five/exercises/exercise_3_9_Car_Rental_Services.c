/*

5.9 (Car Rental Services) A car rental service charges a minimum fee of $25.00 to rent a car for
8 hours, and charges an additional $5 per hour after 8 hours. The maximum charge per day is $50
exclusive of service tax. The company charges an additional $0.50 per hour as service tax. Assume that
no car is rented for more than 72 hours at a time. If a car is rented for more than 24 hours, then rental
is calculated on a daily basis. 

Write a program that calculates and prints the rental charges for each of
three customers who rented cars from this agency yesterday. You should enter the hours for which the
car has been rented for each customer. Your program should print the results in a neat tabular format
and should calculate and print the total of yesterday’s receipts. The program should use the function
calculateCharges to determine the charges for each customer.
*/

#include <stdio.h>

int calculateCharges(); // function prototype

int main(void)
{
	
	int car_one_rental_hours = 0;
	int car_two_rental_hours = 0;
	int car_three_rental_hours = 0;

	printf("\nWelcome to Car Rental's Billing Software!\n");
	printf("---------------------------------------------\n\n");

	for (unsigned int counter = 1; counter <= 3; ++counter) {
		
		int rent_hours = 0;

		printf("Please enter rent hours for car # %d >>> ", counter);
		scanf("%d", &rent_hours);
		
		switch(counter) {
			case 1:
				car_one_rental_hours = rent_hours;
				break;
			case 2:
				car_two_rental_hours = rent_hours;
				break;
			case 3:
				car_three_rental_hours = rent_hours;
				break;
		}

	}
}
