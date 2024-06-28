/*
2.22 (Odd or Even) Write a program that reads an integer and determines and displays whether it’s odd or even. Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.
*/

#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("\n%s", "Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0){
        puts("Even");
    }
    if (number % 2 != 0){
        puts("Odd");
    }

    return 0;
}

/*

 **Test Case 1: Even number (0)**
Input: `0`
Expected Output: "Even"
Reasoning: According to the problem statement, any multiple of two is even. Since 0 is a
multiple of two, it should be classified as an even number.

**Test Case 2: Odd number (3)**
Input: `3`
Expected Output: "Odd"
Reasoning: Any integer that leaves a remainder of 1 when divided by 2 is odd. In this case, the
remainder when dividing 3 by 2 would be 1, making it an odd number.

**Test Case 3: Even number (4)**
Input: `4`
Expected Output: "Even"
Reasoning: As mentioned earlier, any multiple of two is even. Since 4 is a multiple of two, it
should be classified as an even number.

**Test Case 4: Negative odd number (-5)**
Input: `-5`
Expected Output: "Odd"
Reasoning: The remainder operator will still work correctly with negative numbers. When dividing
-5 by 2, the remainder would still be 1, making it an odd number.

**Edge Cases**

* **Test Case 5: Large positive number (1000000)**
Input: `1000000`
Expected Output: "Even"
Reasoning: The program should handle large integers correctly. In this case, the remainder when
dividing 1000000 by 2 would be 0, making it an even number.

* **Test Case 6: Large negative number (-1000000)**
Input: `-1000000`
Expected Output: "Even"
Reasoning: Similar to Test Case 6, the program should handle large negative integers correctly.
In this case, the remainder when dividing -1000000 by 2 would also be 0, making it an even
number.

*/
