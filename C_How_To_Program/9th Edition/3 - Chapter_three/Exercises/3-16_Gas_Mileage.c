/*
Problem:

3.16 (Gas Mileage) Drivers are concerned with the mileage
obtained by their automobiles. One driver has kept track of
several tankfuls of gasoline by recording miles driven and
gallons used for each tankful. Develop a program that uses
scanf to input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained
for each tankful. After processing all input information, the program
should calculate and print the combined miles per gallon obtained
for all tankfuls. Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles/gallon for this tank was 22.421875

Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles/gallon for this tank was 19.417475

Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles/gallon for this tank was 24.000000

Enter the gallons used (-1 to end): -1
The overall average miles/gallon was 21.601423

Requirements:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.

*/

/*
Pseudocode: Top-down, stepwise refinement

Top:
    Compute Miles per Gallon for each tankful

First refinement:
   Initialize variables to zero
   Input Gallons used and miles driven
   Compute miles per gallon per trip

   Compute Overall average miles per gallon

Second refinement:
    Initialize total_gallons to 0.00
    Initialize total_miles to 0

    While input is not equal to sentinel value
        input gallons used
        input miles driven
        print miles/per gallon for the current tank
        total_gallons = total_gallons + gallons
        total_miles = total_miles + miles

    Initialize average_miles_per_gallons to total_miles / total_gallons
    Print average_miles_per_gallons
*/

// Miles per Gallon Calculator

#include <stdio.h>

int main(void)
{
    // Initialize reporting variables
    float total_gallons = 0.00;
    int total_miles = 0;

    // Get first entry before entering the loop.
    float gallons = 0.00;
    printf("%s","Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while (gallons != -1) {
        // get miles for current tankful
        printf("%s","Enter the miles driven: ");
        int miles = 0;
        scanf("%d", &miles);

        // computes miles per gallon for currrent tankful.
        float miles_per_gallons = miles / gallons;
        printf("%s%f\n\n", "The miles/gallon for this tank was ", miles_per_gallons);

        // Updates reporting variables with current data
        total_gallons += gallons;
        total_miles += miles;

        // Get eventual entries until sentinel condition is met.
        printf("%s","Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
    }
        // Report overall average miles per gallon.
        float average_miles_per_gallons = total_miles / total_gallons;
        printf("%s%f\n\n", "The overall average miles/gallon was ", average_miles_per_gallons);

        return 0;
}



