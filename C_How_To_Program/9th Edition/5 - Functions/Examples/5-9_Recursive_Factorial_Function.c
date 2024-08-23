// Recursvie factorial function.

#include <stdio.h>

unsigned long long int factorial(int number);

int main(void) {
    // calculate factorial(i) and display result
    for (int i = 0; i <= 21; ++i) {
        printf("%d! = %llu\n", i, factorial(i));
    }
}

//recursive definition of function factorial
unsigned long long int factorial(int number) {
    if (number <= 1) { // base case
        return 1;
    }
    else { // recursive step
        return (number * factorial(number - 1));

    }
}
