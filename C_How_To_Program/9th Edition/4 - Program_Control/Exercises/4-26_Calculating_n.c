/*
4.26 (Calculating the Value of π) Calculate the value of π from the infinite series

π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...


Print a table that shows the value of π approximated by one term of this series, by
two terms, by three terms, and so on. How many terms of this series do you have to
use before you first get 3.14? 3.141? 3.1415? 3.14159?
*/

#include <stdio.h>

int main(void)
{
    int indicator = 0;
    int numerator = 4;
    int denominator = 3;
    double results = 4.00;

    while(1) { // Control + C to quit
        if (indicator == 0){
            results -= (double)numerator / denominator;
            denominator += 2;
            indicator = 1;
            printf("%f\n", results);
        }
        else if (indicator == 1) {
            results += (double)numerator / denominator;
            denominator += 2;
            indicator = 0;
            printf("%f\n", results);
            }
        }

    return 0;
}
