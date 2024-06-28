/*
 Problem:
 A class of ten students took a quiz. The grades
 (integers in the range 0 to 100) for this quiz are
 available to you. Determine the class average on the quiz.
 */

/*
 Pseudocode:

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

// function main begins program execution
int main(void)
{
    // Initialization phase
    int total = 0;
    int counter = 1;

    // Processing phase
    while (counter <= 10) { // loop 10 times
        printf("%s", "Enter grade: "); // prompt for input
        int grade = 0; // grade value
        scanf("%d", &grade); // read grade from user.
        total = total + grade; // add grade to total.
        counter = counter + 1; // incremente counter.
    } // end while

    // Termination phase
    int average = total / 10; // integer division
    printf("Class average is %d\n", average); // Display results
} // end function main
