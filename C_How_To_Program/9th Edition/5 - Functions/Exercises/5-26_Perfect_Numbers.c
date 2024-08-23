/*
5.26 (Perfect Numbers) An integer number is said to be a perfect number if its factors,
including 1 (but not the number itself), sum to the number.

For example, 6 is a perfect number because 6 = 1 + 2 + 3.

Write a function isPerfect that determines whether parameter number is a perfect number.
Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.

Print the factors of each perfect number to confirm that the number is indeed perfect. Challenge the
power of your computer by testing numbers much larger than 1000.
*/

#include <stdio.h>

void isPerfect(int n);

int main(void) {
    int number = 1;
    // 100 times greater than 1,000
    for (int n = 1; n <= 100000; n++) {
        isPerfect(n);
    }
}

void isPerfect(int number) {

    int n = number - 1;
    int sum = 0;

    // First, check if n is a
    // perfect number
    while (n > 0) {
        if (number % n == 0) {
            sum += n;
        }
        n--;
    }
    // if it is, run process again
    // but this time to print factors.
    if (sum == number) {
        n = number - 1;
        while (n > 0) {
            if (number % n == 0) {
                printf("%d ", n);
            }
        n--;
        }
        printf("%s%d\n", "= ", sum);
    }
}

/*
Output:
3 2 1  = 6
14 7 4 2 1  = 28
248 124 62 31 16 8 4 2 1  = 496
4064 2032 1016 508 254 127 64 32 16 8 4 2 1  = 8128
*/
