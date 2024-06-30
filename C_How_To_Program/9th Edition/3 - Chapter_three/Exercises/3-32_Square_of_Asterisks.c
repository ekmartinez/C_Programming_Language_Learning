/*
3.32 (Square of Asterisks) Write a program that reads in
the side of a square and then prints that square out of
asterisks. Your program should work for squares of all side
sizes between 1 and 20. For example, if your program reads a
size of 4, it should print:

****
****
****
****

*/

#include <stdio.h>

int main(void)
{
    int height = 0;

    printf("%s", "Enter size of square (1 - 20): ");
    scanf("%d", &height);

    if (height >= 1 && height <= 20) {

        int length = height;
        int temp_var = length;

        while (height > 0) {
            temp_var = length;

            while (temp_var > 0) {
                printf("%s", "*");

            --temp_var;
            }
            puts("");
            --height;
        }
    }
    else{
        puts("You've entered an invalid entry (options 1 - 20)");
    }
}

