/*
4.17 (Calculating Credit Limits) Collecting money becomes increasingly difficult
during periods of recession, so companies may tighten their credit limits to prevent
their accounts receivable (money owed to them) from becoming too large. In response
to a prolonged recession, one company has cut its customers’ credit limits in half.
Thus, if a particular customer had a credit limit of $2000, it’s now $1000. If a
customer had a credit limit of $5000, it’s now $2500.

Write a program that analyzes the credit status of three customers of this company.

For each customer you’re given:
a) The customer’s account number.
b) The customer’s credit limit before the recession.
c) The customer’s current balance (i.e., the amount the customer owes).

Your program should calculate and print the new credit limit for each customer
and determine (and print) which customers have balances that exceed their new
credit limits.
*/

#include <stdio.h>

int main(void) {

    int c;
    int acct_num = 0;
    int old_credit = 0;
    int new_credit = 0;
    int balance = 0;
    int option = 0;
    int input = 0;

    do {
        printf("\n%s\n", "AR Risk Adviser");
        puts("-------------------------");
        printf("%s", "Enter an Option: \n1-Add customer data.\n2-Print report. \n3-Quit.\n>>>");
        input = scanf("%d", &option);

        if (input == 1) {
            switch (option) {
                case 1:
                   printf("%s", "Enter account number: ");
                   input = scanf("%d", &acct_num);
                   if (input == 1) {
                       printf("%s", "Enter old credit limit: ");
                       input = scanf("%d", &old_credit);
                       new_credit = (double)old_credit / 2;

                       printf("%s", "Enter balance: ");
                       input = scanf("%d", &balance);
                       if (input == 1) {
                           continue;
                       }
                       else{
                           puts("You have entered an invalid entry.");
                           break;
                        }
                   }
                   else {
                        puts("You have entered an invalid entry");
                        break;
                    }
                    printf("%s", "You've completed your entry, press enter to go back to main menu. ");
                    break;
                case 2:
                    puts("\nReporting Module");
                    puts("--------------------");
                    printf("%s%d\n", "Account Number: ", acct_num);
                    printf("%s%d\n", "Credit limit before recession: ", old_credit);
                    printf("%s%d\n", "Current balance: ", balance);
                    printf("%s%d\n", "New credit limit: ", new_credit);

                    printf("%s", "Balance exceeds new credit limit: ");
                    if (balance > new_credit) {
                        printf("%s\n", "Yes");
                    }
                    else {
                        printf("%s\n", "No");
                    }
                    break;
                case 3:
                    puts("Exiting...");
                    break;
            }
        }
        else {
            printf("%s", "You have entered an unexpected value.");
            break;
        }

    } while (option != 3);
}

/*
 **Test Case 1: Customer with balance below new credit limit**

* Input:
        + Account number: 101
        + Credit limit before recession: $1000
        + Current balance: $500 * Expected output:
        + New credit limit: $500
        + Balance exceeds new credit limit: No

**Test Case 2: Customer with balance above new credit limit**

* Input:
        + Account number: 102
        + Credit limit before recession: $2000
        + Current balance: $2500
* Expected output:
        + New credit limit: $1000 (halved from $2000)
        + Balance exceeds new credit limit: Yes

**Test Case 3: Customer with zero balance**

* Input:
        + Account number: 103
        + Credit limit before recession: $5000
        + Current balance: $0
* Expected output:
        + New credit limit: $2500 (halved from $5000)
        + Balance exceeds new credit limit: No

**Test Case 4: Customer with negative balance**

* Input:
        + Account number: 104
        + Credit limit before recession: $1000
        + Current balance: -$200
* Expected output:
        + New credit limit: $500
        + Balance exceeds new credit limit: No

**Test Case 5: Edge case - customer with no outstanding balance**

* Input:
        + Account number: 105
        + Credit limit before recession: $5000
        + Current balance: $0
* Expected output:
        + New credit limit: $2500 (halved from $5000)
        + Balance exceeds new credit limit: No

*/
