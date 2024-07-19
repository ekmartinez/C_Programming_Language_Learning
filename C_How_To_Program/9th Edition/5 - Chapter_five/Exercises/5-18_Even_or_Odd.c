/*
5.18 (Even or Odd) Write a program that inputs a series of integers and passes them
one at a time to function isEven, which uses the remainder operator to determine
whether an integer is even. The function should take an integer argument and return
1 if the integer is even and 0 otherwise.
*/

#include <stdio.h>

int isEven(int n);

int main(void) {
    int number = 0;

    printf("%s", "Enter an integer: ");
    scanf("%d", &number);

    int result = isEven(number);
    printf("%d\n", result);
}

int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

/*
**Test Case 1: Even number**
* Input: 4
* Expected output: 1 (since 4 is even)

**Test Case 2: Odd number**
* Input: 3
* Expected output: 0 (since 3 is odd)

**Test Case 3: Zero**
* Input: 0
* Expected output: 1 (since 0 is even)

**Test Case 4: Negative even number**
* Input: -4
* Expected output: 1 (since -4 is even)

**Test Case 5: Negative odd number**
* Input: -3
* Expected output: 0 (since -3 is odd)

**Test Case 6: Large positive even number**
* Input: 100
* Expected output: 1 (since 100 is even)

**Test Case 7: Large negative even number**
* Input: -200
* Expected output: 1 (since -200 is even)

**Test Case 8: Edge case: 1**
* Input: 1
* Expected output: 0 (since 1 is odd)
*/
