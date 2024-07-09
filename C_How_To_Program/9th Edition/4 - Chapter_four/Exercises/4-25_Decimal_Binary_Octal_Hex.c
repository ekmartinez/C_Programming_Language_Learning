/*
4.25 (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a
program that prints a table of the binary, octal and hexadecimal equivalents
of the decimal numbers 1—256. If you’re not familiar with these number systems,
read online Appendix E before you attempt this exercise.
[Note: You can display an integer as an octal or hexadecimal value with the conversion specifications %o and %X, respectively.]

Note:  It is almost imposible to solve this problem with the material covered so far in the book. We had to recur to functions,
character arrays and memory allocation, concepts that are out of scope of the current learning objectives.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* to_binary(int n);

int main(void) {

    int decimal = 1;

    printf("%7s\t%10s\t%s\t%s\n", "Decimal", "Binary", "Octal", "Hexadecimal");

    while(decimal <= 256) {
        printf("%7d\t%10s\t%5o\t%11X\n", decimal, to_binary(decimal), decimal, decimal);
        decimal++;
    }
    return 0;
}

char* to_binary(int n) {
    int bit = 0;
    int positional = 256;
    char *binary_str = (char*)malloc(33 * sizeof(char)); // Assuming max binary length is 32 bits
    binary_str[0] = '\0';

    // To skip leading zeros
    while (n < positional) {
        positional = positional / 2;
    }
    do {
        bit = n / positional;
        n = n % positional;
        sprintf(binary_str + strlen(binary_str), "%d", bit);
        positional = positional / 2;
    } while(positional > 0);

    return binary_str;
}

/*
Output:

Decimal     Binary      Octal   Hexadecimal
      1          1          1             1
      2         10          2             2
      3         11          3             3
      4        100          4             4
      5        101          5             5
      6        110          6             6
      7        111          7             7
      8       1000         10             8
      9       1001         11             9
     10       1010         12             A
...
    256  100000000        400           100
*/
