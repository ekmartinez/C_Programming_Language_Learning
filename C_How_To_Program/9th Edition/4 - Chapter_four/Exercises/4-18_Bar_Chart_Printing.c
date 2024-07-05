/*
4.18 (Bar-Chart Printing Program) One interesting application of computers is
drawing graphs and bar charts. Write a program that reads five numbers (each between 1 and 30).
For each number read, your program should print a line containing that number of adjacent asterisks.
For example, if your program reads the number seven, it should print *******.
*/

#include <stdio.h>

int main(void)
{
    int first = 0;
    int second= 0;
    int third = 0;
    int fourth = 0;
    int fifth = 0;

    printf("%s", "Enter five numbers (1 - 30): ");
    int input = scanf("%d%d%d%d%d", &first, &second, &third, &fourth, &fifth);

    if (input != 5) {
        puts("An unexpected value was entered. options (5 integers)");
        return 1;
    }
    if (first < 1 || first > 30 || \
        second < 1 || second > 30 || \
        third < 1 || third > 30 || \
        fourth < 1 || fourth > 30 || \
        fifth < 1 || fifth > 30) {

        puts("Error: Valid values are in the range (1 - 30)");
        return 1;
    }
    puts("");

    for (unsigned int n1 = first-1; n1 <= first; n1--) {
        printf("%s", "*");
    }
    puts("");

    for (unsigned int n2 = second-1; n2 <= second; n2--) {
        printf("%s", "*");
    }
    puts("");

    for (unsigned int n3 = third-1; n3 <= third; n3--) {
        printf("%s", "*");
    }
    puts("");

    for (unsigned int n4 = fourth-1; n4 <= fourth; n4--) {
        printf("%s", "*");
    }
    puts("");

    for (unsigned int n5 = fifth-1; n5 <= fifth; n5--) {
        printf("%s", "*");
    }
    puts("\n");
}

/*
Output:

Enter five numbers (1 - 30): 5 10 15 10 5

*****
**********
***************
**********
*****

*/
