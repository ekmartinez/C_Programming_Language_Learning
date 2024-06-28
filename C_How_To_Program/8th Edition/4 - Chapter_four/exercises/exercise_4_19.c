
/*
4.19 (Calculating Sales) An online retailer sells five different products whose retail prices are
shown in the following table:

Product#	Price
1			$2.98
2			$4.50
3			$9.98
4			$4.49
5			$6.87

Write a program that reads a series of pairs of numbers as follows:

a) Product number
b) Quantity sold for one day

Your program should use a switch statement to help determine the retail price for each product.
Your program should calculate and display the total retail value of all products sold last week.
 *
*/

#include <stdio.h>

int main(void)
{
	unsigned int product1_total = 0;
	unsigned int product2_total = 0;
	unsigned int product3_total = 0;
	unsigned int product4_total = 0;
	unsigned int product5_total = 0;

	puts("Enter the letter grad.");
	puts("Enter the EOF character to end input.");

	int product_number; 

	// loop until user types end-of-file key sequence
	while ((product_number = getchar()) != EOF) {
		
		
		switch (product_number) {
			
		case '1': 
			++product1_total;
			break;

		case '2':  
			++product2_total;
			break; 

		case '3': 
			++product3_total;
			break; 

		case '4': 
			++product4_total;
			break; 

		case '5': 
			++product5_total;
			break; 

		case '\n':
		case '\t': // tabs
		case ' ': // and spaces in input
			break;

		default: 
			printf("%s", "Incorrect letter grade entered.");
			puts("Enter a new grade.");
			break; // optional; will exit switch anyway
		}
	} // end while

	// output summary of results
	puts("\nTotals sales for each product line:");
	printf("A: %u\n", product1_total);
	printf("B: %u\n", product2_total);
	printf("C: %u\n", product3_total);
	printf("D: %u\n", product4_total);
	printf("F: %u\n", product5_total);
}

// On linux the EOF indicator is entered by typing <Ctrl> d














