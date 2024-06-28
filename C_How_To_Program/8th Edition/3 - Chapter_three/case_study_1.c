// Counter-Controlled Iteration

/*
Pseudocode:

A class of ten students took a quiz. The grades (integers in the range 0 to 100) for this quiz are available to you. Determine the class average on the quiz.

Set total to zero
Set grade counter to one

While grade counter is less than or equal to ten
	Input the next grade
	Add the grade into the total
	Add one to the grade counter

Set the class average to the total divided by ten
Print the class average

*/


// Class average program with counter-controlled iteration.

#include <stdio.h>

int main(void) 
{
	unsigned int counter;  // number of grade to be entered next
	int grade; // grade value
	int total; // sum of grades entered by user
	int average; // average of grades

	// initialization phase
	total = 0; // Initialize total
	counter = 1; // inititialize loop counter

	// processing phase
	while(counter <= 10) { // loop 10  times
		printf("%s", "Enter grade: "); // prompt for input
		scanf("%d", &grade); // read grade from user
		total = total + grade; // add grade to total
		counter = counter + 1; // increment counter
	} // end while

	// terminination phase
	average = total / 10; // integer division
	printf("Class average is %d\n", average); // display result

}

