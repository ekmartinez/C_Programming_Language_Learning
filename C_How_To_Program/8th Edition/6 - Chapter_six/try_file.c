// Personal Practrice Exercise
//
// Develop a C program take takes 12 months sales from the user and returns
// the Total, Average, min, max and other applicable variables.

#include <stdio.h> 
#define SIZE 12

int main(void) 
{
	double lst[SIZE];
	double total_sales = 0.00;
	double average = 0.00;

	for (size_t x = 1; x < SIZE + 1; ++x) {

		double temp_variable = 0.00;

		printf("Enter sales data for month # %d :", (int)x); 
		scanf("%lf", &lst[x]);
	}	 
	
	for (size_t y = 1; y < SIZE + 1; ++y) {
		printf("Month # %ld: %f\n", y, lst[y]);
	}
	return 0;
}

