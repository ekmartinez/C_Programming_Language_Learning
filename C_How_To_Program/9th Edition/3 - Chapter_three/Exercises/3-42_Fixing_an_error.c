/*
3.42 What’s wrong with the following statement?
Rewrite it to accomplish what the programmer was probably trying to do.
printf("%d", ++(x + y));
*/

#include <stdio.h>

int main(void)
{
    printf("\n%s\n", "The programmer is trying to preincrement a mathematical calculation ");
    printf("%s\n", "which is an invalid operation resulting in an error. ");
    printf("\n%s\n", "Predecrement and postdecrement work only on individual variables, so ");
    printf("%s\n", "the statement: printf(\"%d\", ++(x + y)); is wrong. \n\nWe can fix this as follows: ");
    printf("%s", "\nint x = 1;\nint y = 2;\n\nsum = x + y;\nprintf(\"%d\", ++sum);\n");

    int x = 1;
    int y = 2;

    int sum = x + y;
    printf("\n%s%d\n\n", "which is equal to: ", ++sum);

    return 0;
}
