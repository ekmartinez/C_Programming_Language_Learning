/*
Write a program that finds the largest in a series of numbers entered by the user. 
The program must prompt the user to enter numbers one by one. When the user enters 0 or a negative number, the program must display the largest nonnegative number entered:

Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0
The largest number entered was 100.62

Notice that the numbers aren’t necessarily integers.

*/

#include <stdio.h>

int main(void)
{
	float number, largest;

	// Get number before getting into the loop
	printf("\n%s", "Enter a number: ");
	scanf("%f", &number);

	largest = number;

	while(1) {
		printf("%s", "Enter a number: ");
		scanf("%f", &number);

		if (number == 0)
			break;
		else if (number > largest)
			largest = number;
	}
	printf("%s%.2f\n", "The largest number entered was ", largest);
}
