/*
Using the switch statement, write a program that converts a numerical grade into a letter
grade:

Enter numerical grade: 84
Letter grade: B

Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten’s digit.
*/

#include <stdio.h>

int main(void) 
{
	int grade = 0;

	printf("\n%s", "Enter numerical grade: ");
	scanf("%d", &grade);
	
	if (grade < 0 || grade > 100) {
		printf("%s\n", "Error: Invalid grade. Please enter a grade in the range 0-100");
		return 1;
	}

	int tens = grade / 10;

	switch(tens) {
		case 9: case 10:
			printf("%s\n", "Letter grade: A");
			break;
		case 8: 
			printf("%s\n", "Letter grade: B");
			break;
		case 7:
			printf("%s\n", "Letter grade: C");
			break;
		case 6: 
			printf("%s\n", "Letter grade: D");
			break;
		default:
			printf("%s\n", "Letter grade: F"); 
			break;
	}
}
/*

Test Case 1: Valid Grade - A
	Input: 95
	Expected: Letter grade: A
	Actual: Letter grade: A

Test Case 2: Valid Grade - B
	Input: 84
	Expected: Letter grade: B
	Actual: Letter grade: B

Test Case 3: Valid Grade - C
	Input: 75
	Expected: Letter grade: C
	Actual: Letter grade: C

Test Case 4: Valid Grade - D
	Input: 65
	Expected: Letter grade: D
	Actual: Letter grade: D

Test Case 5: Valid Grade - F
	Input: 50
	Expected: Letter grade: F
	Actual: Letter grade: F

Test Case 6: Boundary Case - A
	Input: 90
	Expected: Letter grade: A
	Actual: Letter grade: A

Test Case 7: Boundary Case - B
	Input: 89
	Expected: Letter grade: B
	Actual: Letter grade: B

Test Case 8: Boundary Case - C
	Input: 79
	Expected: Letter grade: C
	Actual: Letter grade: C

Test Case 9: Boundary Case - D
	Input: 69
	Expected: Letter grade: D
	Actual: Letter grade: D

Test Case 10: Invalid Grade - Above Range
	Input: 105
	Expected: Error message: "Invalid grade. Please enter a grade between 0 and 100."
	Actual: Error message: "Invalid grade. Please enter a grade between 0 and 100."

Test Case 11: Invalid Grade - Below Range
	Input: -5
	Expected: Error message: "Invalid grade. Please enter a grade between 0 and 100."
	Actual: Error message: "Invalid grade. Please enter a grade between 0 and 100."

Test Case 12: Edge Case - Zero
	Input: 0
	Expected: Letter grade: F
	Actual: Letter grade: F

*/
