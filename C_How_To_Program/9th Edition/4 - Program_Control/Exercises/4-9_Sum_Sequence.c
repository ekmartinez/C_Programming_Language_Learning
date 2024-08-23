/*
4.9 (Sum a Sequence of Integers) Write a program that sums a sequence of integers.
Assume that the first integer read with scanf specifies the number of values remaining
to be entered. Your program should read only one value each time scanf executes.

A typical input sequence might be

5 100 200 300 400 500

where the 5 indicates that the next five values are to be summed.
*/

#include <stdio.h>

int main(void)
{
    int value = 0;
    printf("%s\n", "Enter sequence below >>> ");
    scanf("%d", &value);

    int count = value;

    int sum = 0;
    for (int i = 1; i <= count; i++) {
        scanf("%d", &value);
        sum += value;
    }
    printf("%s%d\n", "Total: ", sum);

    return 0;
}

/*
Output:

Enter sequence below >>>
5
100
200
300
400
500
Total: 1500

*/
