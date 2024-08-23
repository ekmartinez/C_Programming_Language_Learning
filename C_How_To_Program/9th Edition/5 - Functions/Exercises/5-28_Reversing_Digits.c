/*
5.28 (Reversing Digits) Write a function that takes an integer value and returns
the number with its digits reversed. For example, given the number 7631, the function
should return 1367.
*/

#include <stdio.h>

int reversedDigits(int n);

int main(void) {
    int num = 0;

    printf("%s", "Enter a number: ");
    scanf("%d", &num);

    printf("%d\n", reversedDigits(num));
}

int reversedDigits(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10; // extract the last digit and append to rev
        n /= 10; // remove the last digit from n
    }
    return rev;
}

/*
**Test Case 1: Single digit input**
Input: 5
Expected Output: 5 (since reversing a single digit doesn't change its value)

**Test Case 2: Two-digit input**
Input: 34
Expected Output: 43

**Test Case 3: Three-digit input**
Input: 123
Expected Output: 321

**Test Case 4: Four-digit input**
Input: 7654
Expected Output: 4567

**Test Case 5: Five-digit input**
Input: 98765
Expected Output: 56789

**Test Case 6: Edge case**
Input: 12345
Expected Output: 54321

**Test Case 7: Edge case - zero**
Input: 0
Expected Output: 0 (since reversing zero leaves it unchanged)

**Test Case 8: Large input**
Input: 987654321
Expected Output: 123456798
*/
