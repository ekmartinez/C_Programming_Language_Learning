/*
3.19 (Interest Calculator) The simple interest on a loan is
calculated by the formula interest = principal * rate * days / 365;

The preceding formula assumes that rate is the annual interest rate,
so it divides by 365 (days per year). Develop a program that uses scanf
to input principal, rate and days for several loans, and will calculate
and display the simple interest for each loan, using the preceding formula.
Here is a sample input/output dialog:

Enter loan principal (-1 to end): 1000.00
Enter interest rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00
Enter loan principal (-1 to end): 1000.00
Enter interest rate: .08375
Enter term of the loan in days: 224
The interest charge is $51.40
Enter loan principal (-1 to end): -1

Requirements:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
*/

/*
Pseudocode: Top-Down, Stepwise refinement

Top:
    Compute simple interest for undetermined number of loans

First refinement
    Initialize variables
    Compute interest
    Print Interest charge

Second refinement:


    Initialize loan principal to 0.00
    Initialize interest rate to 0.00
    Initialize days to 0
    Initialize interest_charge to 0.00

    Input loan principal

    while loan principal not equal to sentinel
        input interest rate
        input days
        interest charge = loan principal * interest * days / 365
        print interest charge
*/

#include <stdio.h>

int main(void)
{
    double principal = 0.00;
    double interest = 0.00;
    int loan_days = 0;
    int days_in_year = 365;
    double interest_charge = 0.00;

    // Get first entry before getting into indeterminate loop
    printf("\n%s", "Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1) {
        printf("%s", "Enter interest rate: ");
        scanf("%lf", &interest);

        printf("%s", "Enter term of the loan in days: ");
        scanf("%d", &loan_days);

        interest_charge = principal * interest * loan_days / days_in_year;

        printf("%s%.2f\n", "The interest charge is $", interest_charge);

        // Get entry inside indeterminate loop
        printf("\n%s", "Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);
    }
    return 0;
}

