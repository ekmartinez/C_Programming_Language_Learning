/*
 2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers. Use only the single-selection form of the if statement you learned in this chapter. 
 */

#include <stdio.h>

int main(void) {
	
	// Read data from user
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("%s", "Enter 3 digits: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	// Find sum, product & average
	int sum = num1 + num2 + num3;
	int average = sum / 3;
	int product = num1 * num2 * num3;

	// Find largest Value
	int largest = num1;

	if (num2 > largest){
		largest = num2;
	}

	if (num3 > largest){
		largest = num3;
	}
	
	// Find smallest
	int smallest = num1;

	if (num2 < smallest){
		smallest = num2;
	}

	if (num3 < smallest){
		smallest = num3;
	}

	//Output Results
	
	printf("\nSummary Statistics\n");
	printf("--------------------------\n");
	printf("Sum: %d\n", sum);
	printf("Average: %d\n", average);
	printf("Product: %d\n", product);
	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	printf("--------------------------\n");

}
