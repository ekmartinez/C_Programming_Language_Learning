/*
3.39 (Checkerboard Pattern of Asterisks) Write a program that displays the
following checkerboard pattern:

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

Your program must use only three output statements, one of each of the
following forms:

printf("%s", "* ");
printf("%s", " ");
puts(""); // outputs a newline

*/

#include <stdio.h>

int main(void)
{
    int height = 1;
    int length = 1;
    while (height <= 8){
        if (height % 2 == 0) {
            printf("%s", " ");
        }
        while (length <= 8) {
            printf("%s", "* ");
            length++;
        }
        puts("");
        length = 1;
        height++;
    }
    return 0;
}
