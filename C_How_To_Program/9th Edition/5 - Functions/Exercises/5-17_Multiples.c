/*
5.17 (Multiples) Write a function isMultiple that determines for a pair of
integers whether the second integer is a multiple of the first. The function
should take two integer arguments and return 1 (true) if the second is a multiple
of the first, and 0 (false) otherwise. Use this function in a program that inputs
a series of pairs of integers.
*/

#include <stdio.h>

int isMultiple(int f, int s);

int main(void) {
    int firstInteger = 0;
    int secondInteger = 0;

    printf("%s", "Enter two integers (space separated): ");
    scanf("%d%d", &firstInteger, &secondInteger);

    int result = isMultiple(firstInteger, secondInteger);
    printf("%d\n", result);
}

int isMultiple(int f, int s) {
    if (s % f == 0) {
        return 1;
    }
    else {
        return 0;
    }
}



/*
**Test Case 1:**
Expected: 1 (true)
Actual: ? (run the program with input pair (4, 8))

**Test Case 2:**
Expected: 0 (false)
Actual: ? (run the program with input pair (3, 5))

**Test Case 3:**
Expected: 1 (true)
Actual: ? (run the program with input pair (6, 12))

**Test Case 4:**
Expected: 0 (false)
Actual: ? (run the program with input pair (2, 7))

**Test Case 5:**
Expected: 1 (true)
Actual: ? (run the program with input pair (9, 18))
*/
