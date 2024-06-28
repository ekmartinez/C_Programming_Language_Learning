/*
2.26 (Separating Digits in an Integer) Write a program that inputs one five-digit number, separates the number into its individual digits and displays the digits separated from one another by three spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example, if the user types in 42139, the program should display:
4 2 1 3 9
*/

#include <stdio.h>

int main(void)
{
    int digit = 0;
    int base = 10000;

    printf("%s", "Enter a five-digit number: ");
    scanf("%d", &digit);

    printf("%d ", digit / base);
    digit %= base;
    base -= 9000;

    printf("%d ", digit / base);
    digit %= base;
    base -= 900;

    printf("%d ", digit / base);
    digit %= base;
    base -= 90;

    printf("%d ", digit / base);
    digit %= base;
    base -= 9;

    printf("%d\n", digit / base);

    return 0;
}
