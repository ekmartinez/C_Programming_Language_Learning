/*
 5.24(Currency Conversion) Implement the following double functions:
a) Function toYen takes an amount in US dollars and returns the Yen equivalent.
b) Function toEuro takes an amount in US dollars and return the Euro equivalent
c) Use these functions to write a program that prints charts showing the Yen and Euro
equivalents of a range of dollar amounts. Print the outputs in a neat tabular format. Use
an exchange rate of 1 USD = 118.87 Yen and 1 USD = 0.92 Euro.
*/

# include <stdio.h>

double toYen(double dollar);
double toEuro(double dollar);

int main(void)
{
	double us_dollars = 0.00;

	printf("\nEnter US Dollars >>> ");
	scanf("%lf", &us_dollars);

	printf("%-13s%12s%12s\n","Currency", "Dollars", "Foreign");
	printf("%-13s%12.2f%12.2f\n", "Yen", us_dollars, toYen(us_dollars));
	printf("%-13s%12.2f%12.2f\n", "Euro", us_dollars, toEuro(us_dollars));
}

double toYen(double us_dollars) {

	double SPOT_RATE_US = 118.87 / 100;
	double conversion = (us_dollars * SPOT_RATE_US); 

	return conversion; 
}
double toEuro(double us_dollars) {

	double SPOT_RATE_US = 92.00 / 100;
	double conversion = (us_dollars * SPOT_RATE_US); 

	return conversion; 
}
