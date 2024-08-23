/*
4.14 (Factorials) The factorial function is used frequently in probability
problems. The factorial of a positive integer n (written n! and pronounced “n
factorial”) is equal to the product of the positive integers from 1 to n.

Write a program that evaluates the factorials of the integers from 1 to 5.
Print the results in tabular format. What difficulty might prevent you from
calculating the factorial of 20?
*/

#include <stdio.h>

int factorial(int x);

int main(void)
{
    printf("\n%s\t%s\n", "Number", "Factorial");

    for (int x = 1; x <= 5; x++) {
        printf("%6d\t%9d\n", x, factorial(x));
    }

    puts("\nWhat difficulty might prevent you from calculating the factorial of 20?");
    puts("Answer: The main difficulty is the risk of overflowing the int data type.\n");

    return 0;
}

int factorial(int x) {
    int factor = x - 1;

    while (factor > 0) {
        x *= factor--;
    }
    return x;
}

/*

Number  Factorial
     1          1
     2          2
     3          6
     4         24
     5        120

What difficulty might prevent you from calculating the factorial of 20?
Answer: The main difficulty is the risk of overflowing the int data type.

*/
