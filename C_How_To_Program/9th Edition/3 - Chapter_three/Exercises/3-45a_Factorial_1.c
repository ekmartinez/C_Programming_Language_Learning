/*
3.45a (Factorial) Write a program that reads a non-negative integer
and computes and prints its factorial.
*/

#include <stdio.h>

int main(void)
{

    int factorial = 0;

    printf("%s", "Enter an integer: ");
    scanf("%d", &factorial);

    int factor = factorial - 1;

    while (factor > 0) {
        factorial *= factor--;
    }

    printf("%d\n", factorial);

    return 0;
}

/*
**Test Case 1: Small Positive Integer**
* Input: `2`
* Expected Output: `2` (since 2! = 2)

**Test Case 2: Medium-Sized Positive Integer**
* Input: `5`
* Expected Output: `120` (since 5! = 5 × 4 × 3 × 2 × 1 = 120)

**Test Case 3: Larger Positive Integer**
* Input: `8`
* Expected Output: `40320` (since 8! = 8 × 7 × ... × 3 × 2 × 1)

**Test Case 4: Edge Case - One**
* Input: `1`
* Expected Output: `1` (since 1! = 1, by definition)

**Test Case 5: Small Factorial Value**
* Input: `4`
* Expected Output: `24` (since 4! = 4 × 3 × 2 × 1)

**Test Case 6: Middle-Sized Positive Integer**
* Input: `7`
* Expected Output: `5040` (since 7! = 7 × 6 × ... × 3 × 2 × 1)
*/

