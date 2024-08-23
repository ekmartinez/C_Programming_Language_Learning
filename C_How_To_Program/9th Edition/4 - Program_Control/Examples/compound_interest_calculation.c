/*
A person invests $1000.00 in a savings account yielding 5% interest.
Assum-ing all interest is left on deposit in the account, calculate and print
the amount of money in the account at the end of each year for 10 years.
Use the following formula for determining these amounts:

a = p(1 + r)^n

where
    p is the original amount invested
    r is the annual interest rate
    n is the number of years
    a is the amount on deposit at the end
*/

// Calculating compound interest.

#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0; // starting principal
    double rate = 0.05; // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (int year = 1; year <= 10; ++year) {

        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, year);

        // output one table row
        printf("%4d%21.2f\n", year, amount);
    }
}

/*

 Output:

 Year    Amount on deposit
   1              1050.00
   2              1102.50
   3              1157.63
   4              1215.51
   5              1276.28
   6              1340.10
   7              1407.10
   8              1477.46
   9              1551.33
  10              1628.89

  */
