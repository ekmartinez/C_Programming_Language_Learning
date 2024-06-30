/*
3.23 (Find the Largest Number) Finding the largest number
(i.e., the maximum of a group of numbers) is used frequently
in computer applications. For example, a program that determines
the winner of a sales contest would input the number of units sold
by each salesperson. The salesperson who sells the most units wins
the contest.

Write a pseudocode program and then a program that uses scanf to input
a series of 10 non-negative numbers and determines and prints the largest
of the numbers.

Your program should use three variables:

a) counter — A counter to count to 10 (i.e., to keep track of how many
numbers have been input and to determine when all 10 numbers have been
processed).

b) number — The current number input to the program.

c) largest — The largest number found so far.

*/

/*
 Pseudocode: Top-Down, Stepwise refinement

 Top:
    Find the largest number

First refinement:
    Initialize variables
    Input each value
    Determine if value is largest
    Print largest

Second refinement:
    Initialize counter to 1
    Initialize number to 0
    Initialize largest to 0

    while counter greater than 0
        input number
        if number is greater than largest
            largest is equal to number

    Print largest
*/

#include <stdio.h>

int main(void)
{
    int counter = 1;
    int number = 0;
    int largest = 0;

    while (counter <= 10) {
        printf("%s", "Enter an integer >>> ");
        scanf("%d", &number);

        if (number > largest){
            largest = number;
        }
        ++counter;
    }
    printf("%s%d\n\n", "Largest number is: ", largest);

    return 0;
}
