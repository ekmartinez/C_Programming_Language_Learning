/*
 5.30 (Quality Points for Student’s Grades) Write a function toQualityPoints that inputs a stu-
dent’s average and returns 4 it’s 90–100, 3 if it’s 80–89, 2 if it’s 70–79, 1 if it’s 60–69, and 0 if the
average is lower than 60.
*/

#include <stdio.h>

int toQualityPoints(int average);

int main(void) 
{
	int average = 0.00;
	
	printf("\nGrade Categorizer\n---------------------\n");
	printf("\nEnter the student's average: ");	
	scanf("%d", &average);
	
	printf("%d\n\n", toQualityPoints(average));

	return 0;
}

int toQualityPoints(int average) {
	
	unsigned int category = 1;
	
	if (average > 0 && average < 60) {
		category = 0;
	}

	else if (average > 59 && average < 70) {
		category = 1;
	}
	
	else if (average > 69 && average < 80) {
		category = 2;
	}

	else if (average > 79 && average < 90) {
		category = 3;
	}
	
	else if (average > 89 && average < 101) {
		category = 4;
	}
	else {
		printf("\nYou have entered an invalid entry!\nError code: ");
	}	
	return category;
}
