/*
4.9 (Sum and Average of Integers) Write a program to sum a sequence of integers and calcu-
late their average. Assume that the first integer read with scanf specifies the number of values to
be entered. Your program should read only one value each time scanf is executed. A typical input
sequence might be 7 678 234 315 489 536 456 367

where the 7 indicates that the subsequent 7 values are to be summed.

*/

#include <stdio.h>

int main(void)
{
	unsigned int count = 0;
	int sum = 0;
	float average = 0;

	printf("Specify the number of values to be entered >>> ");
	scanf("%u", &count);

	for (unsigned int times = count; times > 0; times--) {
		
		int temp_var = 0;
		printf("Enter a value >>> ");
		scanf("%d", &temp_var);

		sum += temp_var;
	}	

	average = (float)sum / count;

	printf("\nSummary");
	printf("\n------------------\n");
	printf("Count: %d\n", count);
	printf("Sum: %d\n", sum);
	printf("Average: %.2f\n", average);
	printf("------------------\n\n");
}
