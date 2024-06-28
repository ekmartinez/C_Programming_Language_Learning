/*
3.17 (Credit-Limit Calculator) Develop a C program that will determine whether a
department-store customer has exceeded the credit limit on a charge account. For
each customer, the following facts are available:

a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit

The program should use scanf to input each fact, calculate the new balance (=
beginning balance + charges – credits), and determine whether the new balance exceeds
the customer's credit limit. For those customers whose credit limit is exceeded, the
program should display the customer's account number, credit limit, new balance
and the message “Credit limit exceeded.” Here is a sample input/output dialog:

Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
Account: 100
Credit limit: 5500.00
Balance: 5894.78
Credit Limit Exceeded.

Enter account number (-1 to end): 200
Enter beginning balance: 1000.00
Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00

Enter account number (-1 to end): 300
Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00

Enter account number (-1 to end): -1

Requirements:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement.
3. Write a C program.
4. Test, debug and execute the C program.
*/

/*
Pseudocode: Top-Down, stepwise refinement

Top:
    Determine whether a department-store customer has exceeded the credit limit
    on a charge account.

First refinement:
    Initialize variables
    Input variables
    Determine if credit is exceeded
    Prints data

Second refinement:
    Initialize account number to 0
    Initialize beginning balance to 0.00
    Initialize total charges to 0.00
    Initialize total credits to 0.00
    Initialize credit limit to 0.00

    Print account number
    Print credit limit
    Print balance

    if balance greater than credit limit
        Print Credit Limit Exceeded
*/

#include <stdio.h>

int main(void)
{
    int account_number = 0;
    double beginning_balance = 0.00;
    double total_charges = 0.00;
    double total_credits = 0.00;
    double credit_limit = 0.00;

    // Get first entry before getting into loop.
    printf("\n%s", "Enter account number (-1 to end): ");
    scanf("%d", &account_number);

    while (account_number != -1) {
        printf("%s", "Enter beginning balance: ");
        scanf("%lf", &beginning_balance);

        printf("%s", "Enter total charges: ");
        scanf("%lf", &total_charges);

        printf("%s", "Enter total credits: ");
        scanf("%lf", &total_credits);

        printf("%s", "Enter credit limit: ");
        scanf("%lf", &credit_limit);

        double balance = beginning_balance + total_charges - total_credits;

        if (balance > credit_limit) {
            printf("%s%d\n", "Account: ", account_number);
            printf("%s%.2f\n", "Credit limit: ", credit_limit);
            printf("%s%.2f\n", "Balance: ", balance);
            puts("Credit Limit Exceeded.");
        }
        // Get entry while inside loop.
        printf("\n%s", "Enter account number (-1 to end): ");
        scanf("%d", &account_number);
    }

    return 0;
}
