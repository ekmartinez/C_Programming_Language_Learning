/*
3.20 (Salary Calculator) Develop a program that will determine
the gross pay for each of several employees. The company pays
“straight time” for the first 40 hours worked by each employee
and pays “time-and-a-half” for all hours worked in excess of 40 hours.
You’re given a list of the company’s employees, the number of hours each
worked last week and each employee’s hourly rate. Your program should use
scanf to input this information for each employee and determine and display the employee’s gross pay. Here is a sample input/output dialog:

Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00

Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00

Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00

Enter # of hours worked (-1 to end): -1
*/

/*
Pseudocode: Top-Down, Stepwise refinement

Top:
    Determine gross pay for each of several employees

First refinement:
    Initialize variables
    Input data
    Compute salary

Second refinement:
    Initialize hours to 0
    Initialize rate to 0.00

    input hours

    while hours not equal to sentinel
        input rate
        compute salary
        print salary

        input hours
*/

#include <stdio.h>

int main(void)
{
    int hours = 0;
    int overtime_hours = 0;
    int regular_hours = 40;
    double rate = 0.00;
    double overtime_factor = 1.5;
    double salary = 0.00;
    double overtime_pay = 0.00;

    // Get firts entry before enterging into loop
    printf("\n%s", "Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1) {
        printf("%s", "Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        if (hours <= regular_hours) {
            salary = hours * rate;
            printf("%s%.2f\n", "Salary is $ ", salary);
        }
        else if (hours > regular_hours) {
            overtime_hours = hours - regular_hours;
            regular_hours = hours - overtime_hours;
            overtime_pay = overtime_hours * rate * overtime_factor;
            salary = (regular_hours * rate) + overtime_pay;
            printf("%s%.2f\n", "Salary is $ ", salary);
        }
        // Ensure loop keeps running
        printf("\n%s", "Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }
    return 0;
}
