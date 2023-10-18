/*
3.23 (Find the Largest Number) The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a pseudocode program and then a
program that inputs a series of 10 non-negative numbers and determines and prints the largest of
the numbers. 

[Hint: Your program should use three variables as shown below.]

counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to 
determine when all 10 numbers have been processed)

number: The current number input to the program

largest: The largest number found so far 

*/

/*
Pseudocode
----------

Top
----
Write a program and then a program that inputs a series of 10 non-negative numbers and determines 
and prints the largest of
the numbers. 

First Refinement
-----------------
Initialize Variables
Check for the largest number
Print the Results

Second Refinement
-----------------
Initialize Counter to 10.
Initialize number to 0.
Initilize largest to 0.

while counter > 0
	If number is greater than largest:
		largest is equual to number
		counter is equal to counter - 1
Print largest

*/

#include <stdio.h>

int main(void) 
{
	unsigned int counter = 10;
	int number = 0;
	int largest = 0;

	while(counter >= 0) {
		printf("Input a non-negative integers >>> ");
		scanf("%d", &number);

		if (number > largest) {
			largest = number;
			counter -= 1;
		}

		printf("\nCounter: %d\n", counter);
	}

	printf("\nCounter: %d\n", counter);
	printf("\nThe largest number is: %d\n", largest);

	return 0;
}







