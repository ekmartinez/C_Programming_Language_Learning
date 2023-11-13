/*
 5.24(Currency Conversion) Implement the following double functions:
a) Function toYen takes an amount in US dollars and returns the Yen equivalent.
b) Function toEuro takes an amount in US dollars and return the Euro equivalent
c) Use these functions to write a program that prints charts showing the Yen and Euro
equivalents of a range of dollar amounts. Print the outputs in a neat tabular format. Use
an exchange rate of 1 USD = 118.87 Yen and 1 USD = 0.92 Euro.
*/

# include <stdio.h>

double toYen(int dollar);
double toEuro(int dollar);

int main(void)
{
	int us_dollars = 0;

	printf("\nEnter US Dollars >>> ");
	scanf("%d", &us_dollars);

	printf("\nCurrency\t\tDollars\tForeign\n");
	printf("Yen\t%d\t%.2f\n", us_dollars, toYen(us_dollars));
	printf("Euro\t%d\t%.2f\n",us_dollars, toEuro(us_dollars));
}

double toYen(int us_dollars) {

	double SPOT_RATE_US = 1.1887;
	double conversion = (us_dollars * SPOT_RATE_US); 

	return conversion; 
}
double toEuro(int us_dollars) {

	double SPOT_RATE_US = .92;
	double conversion = (us_dollars * SPOT_RATE_US); 

	return conversion; 
}
