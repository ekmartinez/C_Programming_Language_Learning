/*
3.18 (Sales-Commission Calculator) One large chemical company pays
its salespeople on a commission basis. The salespeople receive $200
per week plus 9% of their gross sales for that week. For example,
a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650. Develop a program that will use scanf to input each salesperson’s gross sales for last week and calculate and display that salesperson’s earnings. Process one salesperson's figures at a time.

Here is a sample input/output dialog:

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00
Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11
Enter sales in dollars (-1 to end): -1

Requirements:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
*/

/*
Pseudocode: Top-Down, Stepwise refinement

Top:
    Calculate each salesperson's salary

First refinement:
    Initialize variables
    Input sales data
    Compute salary
    Print salary

Second refinement:
    Initialize sales to 0.00
    Initialize base_salary to 200.00
    Initialize sales_percentage to .09
    Initialize commision to 0
    Initialize final_salary to 0

    Ask for sales
    while sales not equal to sentinel
        commision = sales x sales_percentage
        final_salary = base_salary + commision

    Print final_salary
*/

#include <stdio.h>

int main(void)
{
    double sales = 0.00;
    double base_salary = 200;
    double sales_pct = .09;
    double commision = 0.00;
    double final_salary = 0;

    // Ask for sales before entering indefinite loop
    printf("\n%s","Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);

    while(sales != -1) {
        commision = sales * sales_pct;
        final_salary = base_salary + commision;
        printf("%s%.2f\n","Salary is: ", final_salary);

        // Ask for sales inside indefinite loop
        printf("\n%s","Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
    }

    return 0;
}


