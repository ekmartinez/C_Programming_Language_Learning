/*
A college offers a course that prepares students for the state licensing exam for realestate brokers. Last year, 10 of the students who completed this course took the licensing examination. Naturally, the college wants to know how well its students did on the exam. You’ve been asked to write a program to summarize the results. You’ve been given a list of these 10 students. Next to each name a 1 is written if the student passed the exam or a 2 if the student failed.

Your program should analyze the results of the exam as follows:
	1. Input each test result (i.e., a 1 or a 2). Display the prompting message “Enter
		result” each time the program requests another test result.
	2. Count the number of test results of each type.
	3. Display a summary of the test results indicating the number of students who
		passed and the number who failed.
	4. If more than eight students passed the exam, print the message “Bonus to instructor!”

top
---
Analyze exam results and decide whether instructor should receive a bonus

First Refinement
----------------
Initialize variables
Input the ten quiz grades and count passes and failures
Print a summary of the exam results and decide whether instructor should receive a bonus

Second Refinement
------------------
Initialize passes to zero
Initialize failures to zero
Initialize student to one

While student counter is less than or equal to ten
	Input the next exam result

	If the student passed
		Add one to passes
	else
		Add one to failures

	Add one to student counter

Print the number of passes
Print the number of failures
If more than eight students passed
	Print “Bonus to instructor!”
*/


// Analysis of examination results.
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// initialize variables in definitions
	unsigned int passes = 0; // number of passes
	unsigned int failures = 0; // number of failures
	unsigned int student = 1; // student counter
	int result; // one exam result

	// process 10 students using counter-controlled loop
	while (student <= 10) {
		
		// prompt user for input and obtain value from user
		printf("%s", "Enter result (1=pass, 2=fail): ");
		scanf("%d", &result);

		// if result1, increment passes
		if (result == 1) {
			passes = passes + 1;
		} // end if
		else { //otherwie=se, increment failures
			failures = failures + 1;
		} // end else

		student = student + 1; // increment student counter
	} // end while

	// termination phase; display number of passes and failures
	printf("Passed %u\n", passes);
	printf("Failed %u\n", failures);

	// if more thatn eight students passed, print "Bonus to instructor!"
	if (passes > 8) {
		puts("Bonus to instructor!");
	} // end if
} // end function main








































