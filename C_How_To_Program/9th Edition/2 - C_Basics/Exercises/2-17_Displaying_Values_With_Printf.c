/*
2.17 (Displaying Values with printf) Write a program that displays the numbers 1 to 4 on the same line. Write the program using the following methods.

a) Using one printf statement with no conversion specifications.

b) Using one printf statement with four conversion specifications.

c) Using four printf statements.
*/

#include <stdio.h>

int main(void)
{
    // a) Using one printf statement with no conversion specifications.

   printf("\na) Using one printf statement with no conversion specifications.\n");
    printf("1 2 3 4\n");

    // b) Using one printf statement with four conversion specifications.
    printf("\nb) Using one printf statement with four conversion specifications.\n");
   printf("%s %s %s %s\n", "1", "2", "3", "4");

    // c) Using four printf statements.
   printf("\nc) Using four printf statements.\n");
   printf("1 ");
   printf("2 ");
   printf("3 ");
   printf("4\n");

   return 0;
}
