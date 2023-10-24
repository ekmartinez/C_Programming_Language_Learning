/*
4.18 (Bar-Chart Printing Program) One interesting application of computers is drawing graphs
and bar charts. Write a program that reads five numbers (each between 1 and 30). For each number
read, your program should print a line containing that number of adjacent asterisks. For example,
if your program reads the number seven, it should print *******.
 */

#include <stdio.h>

int main(void)
{
	for (unsigned int rng = 0; rng < 5; rng++) {

		int temp_var = 0;

		printf("\nEnter a number >>> ");
		scanf("%d", &temp_var);

		if (temp_var == -1) {
			printf("\nThe Program has ended.\n");
			break;
		}

		if (temp_var < 1 || temp_var > 30) {
			printf("\nInvalid entry, please enter a number in the range 1 -30\n");
			break;
		}
		else {

			for (int iter = temp_var; iter > 0; iter--) {
				printf("%s", "*");
			}
		}
	}
	printf("\n\nThe program has ended.\n");
}
