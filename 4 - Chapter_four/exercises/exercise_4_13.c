/*
4.13 (Natural Numbers Arithmetic) Write a program that prints the sum, the sum of the
squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user.
*/

#include <stdio.h>
#include <math.h>

int main(void)

{
	int range = 0;
	int sum = 0;
	int sum_of_squares = 0;
	int sum_of_cubes = 0;

	printf("\nEnter the end of the range >>> ");
	scanf("%d", &range);

	for (int nat_num = 0; range > 0; range--) {
		nat_num += 1;

		sum += nat_num;
		sum_of_squares += pow(nat_num, 2); 
		sum_of_cubes += pow(nat_num, 3); 
	}

	printf("\nResults\n-----------------\n");
	printf("Sum: %d\n", sum);
	printf("Sum of squares: %d\n", sum_of_squares);
	printf("Sum of cubes: %d\n", sum_of_cubes);

	return 0;
}
