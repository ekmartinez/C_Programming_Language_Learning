/*
3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find the largest values of the 10 numbers. 
[Note: You may input each number only once.]

*/

/*
Pseudocode
----------

Top
----
Find the two largest values of the 10 numbers.

First Refinement
-----------------
Initialize Variables
Check for the two largest number
Print the Results

Second Refinement
-----------------
Initialize Counter to 10.
Initialize number to 0.
Initilize largest to 0.
Initilize second largest to 0.

while counter > 0
	If number is greater than largest:
		largest is equual to number
		
	If number is lesser than largest and greater than second largest
		second largest is equal to number

	counter is equal to counter - 1

Print Two largest number

*/

#include <stdio.h>

int main(void) 
{
	unsigned int counter = 10;
	int number = 0;
	int largest = 0;
	int second_largest;

	while(counter > 0) {
		printf("Input a non-negative integers >>> ");
		scanf("%d", &number);

		if (number > largest) {
			largest = number;
		}
		counter--;
	}

	printf("\nThe largest number is: %d\n", largest);

	return 0;
}







