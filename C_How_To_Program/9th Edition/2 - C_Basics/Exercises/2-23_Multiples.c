/*
2.23 (Multiples) Write a program that reads two integers and determines and displays whether the first is a multiple of the second. Use the remainder operator.
*/

#include <stdio.h>

int main(void)
{
    int first_num = 0;
    int second_num = 0;

    printf("%s", "Enter two integers: ");
    scanf("%d%d", &first_num, &second_num);

    if (second_num == 0) {
        puts("Division by zero is an illegal operation.");
        return 1;
    }
    if (first_num % second_num == 0){
        puts("First number is a multiple of the second number");
    }
    if (first_num % second_num != 0){
        puts("First number is not a multiple of the second number");
    }

    return 0;
}

/*

**Test Case 1: Multiple of 0 (Edge case)**
* Input: `10`, `0`
* Expected output: "No, 10 is not a multiple of 0"
* Reason: A number cannot be a multiple of 0, as division by zero is undefined.

**Test Case 2: Multiple of itself**
* Input: `12`, `12`
* Expected output: "Yes, 12 is a multiple of 12"
* Reason: Any number is a multiple of itself.

**Test Case 3: No multiple**
* Input: `15`, `4`
* Expected output: "No, 15 is not a multiple of 4"
* Reason: 15 is not a multiple of 4 (remainder when divided by 4 is 3).

**Test Case 4: Simple multiple**
* Input: `24`, `8`
* Expected output: "Yes, 24 is a multiple of 8"
* Reason: 24 is indeed a multiple of 8.

**Test Case 5: Edge case - Same numbers**
* Input: `10`, `10`
* Expected output: "Yes, 10 is a multiple of 10"
* Reason: A number is always a multiple of itself.

**Test Case 6: Negative numbers**
* Input: `-12`, `3`
* Expected output: "Yes, -12 is a multiple of 3"

**Test Case 7: Zero as the dividend**
* Input: `0`, `10`
* Expected output: "Yes, 0 is a multiple of 10"
* Reason: Since any number (including 0) is a multiple of itself, we should consider 0 as a special case and return "yes" for this scenario.

*/
