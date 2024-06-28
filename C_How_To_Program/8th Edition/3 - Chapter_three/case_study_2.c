// Sentinel-Contolled Iteration

/*

Generalized Class Average Problem
-------------------------------------
Develop a class-averaging program that will process an arbitrary number of grades each time the program is run.

Top
----
Determine the class average for the quiz

First Refinement
-----------------
Initialize variables
Input, sum, and count the quiz grades
Calculate and print the class average

Second Refinement
------------------
Initialize total to zero
Initialize counter to zero

Input the first grade (possibly the sentinel)
While the user has not as yet entered the sentinel
	Add this grade into the running total
	Add one to the grade counter
	Input the next grade (possibly the sentinel)

If the counter is not equal to zero
	Set the average to the total divided by the counter
	Print the average
else
	Print “No grades were entered”
*/

// Class-average program with sentinel-controlled iteration.

#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int counter; // nubmer of grades entered
	int grade; // grade value
	int total; // sum of grades

	float average; // number with decimal point for average

	// initialization phase
	total = 0; // initialize total
	counter = 0; // initialize loop counter

	// processing phase
	// get first grade from user
	printf("%s", "Enter grade, -1 to end: "); // prompt for input
	scanf("%d", &grade); // read grade from user

	// loop while sentinel value not yet read from user
	while(grade != -1) {
		total = total + grade; // add grade to total
		counter = counter + 1; // increment counter

		// get next grade from user
		printf("%s", "Enter grade, -1 to end "); // prompt for input
		scanf("%d", &grade); // read next grade
	} // end while

	// termination pahse
	// if user entered at least one grade
	if (counter != 0) {
		// calculate average of all grades entered
		average = (float) total / counter;  // avoid truncation

		// display average with two digits of precision
		printf("Class average is %.2f\n", average);
	} // end if
	else { // if no grades were entred, output message
		puts("No grades were entered");
	} // end else

} // end function main










































