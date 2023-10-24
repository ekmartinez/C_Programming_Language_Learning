
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
	int product_number;
	float product1_total;
	float product2_total;
	float product3_total;
	float product4_total;
	float product5_total;

	puts("Enter a product number below:");

	while ((product_number = getchar()) != EOF && product_number != '\n') {

		// Convert character to integer
		product_number -= '0';

	//	printf("\nEnter a product number >>> ");
	//	scanf("%d", &product_number); 
		
		// Determine which product number was entered
		switch (product_number) {

			case 1:
				printf("\nCase 1\n");
				break;
				 
			case 2:
				printf("\nCase 2\n");
				break;

			default:
				printf("\nCase try\n");
				break;
		}
	}
}
