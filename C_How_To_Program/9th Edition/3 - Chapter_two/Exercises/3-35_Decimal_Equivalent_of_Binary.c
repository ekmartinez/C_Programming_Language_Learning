/*
3.35 (Printing the Decimal Equivalent of a Binary Number)

Input a binary integer (5 digits or fewer) containing only 0s and 1s and print its decimal equivalent.

[Hint: Use the remainder and division operators to pick
off the “binary” number’s digits one at a time from right-to-left. Just as in the
decimal number system, in which the rightmost digit has a positional value of 1,
and the next digit left has a positional value of 10, then 100, then 1000, and so on,
in the binary number system the rightmost digit has a positional value of 1, the next
digit left has a positional value of 2, then 4, then 8, and so on.

Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100.

The decimal equivalent of binary 1101 is:

1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.
*/

#include <stdio.h>

int main(void) {

    int decimal = 0;
    int binary = 0;
    int remaider = 0;

    printf("%s", "Enter a binary remaider (5 digits max): ");
    scanf("%d", &binary);

    int first_digit = binary / 10000;
    remaider = binary % 10000;
    decimal = first_digit * 16;

    int second_digit = remaider / 1000;
    remaider = remaider % 1000;
    decimal += second_digit * 8;

    int third_digit = remaider / 100;
    remaider = remaider % 100;
    decimal += third_digit * 4;

    int fourth_digit = remaider / 10;
    decimal += fourth_digit * 2;

    int fifth_digit = remaider % 10;
    decimal += fifth_digit * 1;

    printf("%s%d\n", "Decimal: ", decimal);

    return 0;

}

/*
 * **Test Case 1: Single digit binary number (0 or 1)**
* Input: `0` (binary)
* Expected output: `0` (decimal)

**Test Case 2: Two-digit binary number (00 to 11)**
* Input: `10` (binary)
* Expected output: `2` (decimal)

**Test Case 3: Three-digit binary number (000 to 111)**
* Input: `101` (binary)
* Expected output: `5` (decimal)

**Test Case 4: Four-digit binary number (1000 to 1111)**
* Input: `1100` (binary)
* Expected output: `12` (decimal)

**Test Case 5: Five-digit binary number (00000 to 11111)**
* Input: `10101` (binary)
* Expected output: `21` (decimal)

**Edge cases:**

* **Test Case 6: Leading zeros (00, 001, etc.)**
        + Input: `0101` (binary)
        + Expected output: `5` (decimal)
* **Test Case 7: All ones (11111)**
        + Input: `11111` (binary)
        + Expected output: `31` (decimal)
*/
