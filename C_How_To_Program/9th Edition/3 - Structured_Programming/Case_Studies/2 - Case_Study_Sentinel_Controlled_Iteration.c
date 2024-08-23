/*
Problem:

Develop a class-averaging program that will process
an arbitrary number of grades each time the program is run.

*/

/*
Pseudocode: Top-Down, Stepwise Refinement

Top:
    Determine the class average for the quiz

First refinement:
    Initialize variables
    Input, sum and count the quiz grades
    Calculate and print the class average

Second refinement:
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
        Print "No grades were entered"
*/

// Class-average program with sentinel-controlled iteration.

#include <stdio.h>

int main(void)
{
    // Initialization phase
    int total = 0; // Initialize total
    int counter = 0; // Initialize loop counter

    // get first grade from user
    printf("%s", "Enter grade, -1 to end: "); // prompt for input
    int grade = 0; // grade value
    scanf("%d", &grade); // read grade from user

    // loop while sentinel value not het read from user
    while (grade != -1) {
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt for input
        scanf("%d", &grade); // read next grade
    } // end while

    // termination phase
    // if user entered at leas one grade
    if (counter != 0) {

        // calculate average of all grades entered
        double average = (double) total / counter; // avoid truncation

        // display average with two digits of precision
        printf("Class average is %.2f\n", average);
    } // end if
    else {
        puts("No grades were entered");
    } // end else
} // end function main
