/*
 2.27 (Checkerboard Pattern of Asterisks) 
 Display the following checkerboard pattern with eight printf statements 
 and then display the same pattern with as few printf statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

 It is better to solve this problem using loops, but at this stage of 
 the book looping hasn't been introduced.
 */

#include <stdio.h>

int main(void)
{
	// 1: Using 8 printf statements.
	puts("\nWith eight printf statements");
	printf("********\n");
	printf(" ********\n");
	printf("********\n");
	printf(" ********\n");
	printf("********\n");
	printf(" ********\n");
	printf("********\n");
	printf(" ********\n");

	// 2: Using as few printf statements as possible.
	puts("\nWith as few printf statements as possible.");
	printf("%s%s%s%s%s%s%s%s",
			"********\n", 
			 " ********\n",
			"********\n", 
			" ********\n", 
			"********\n", 
			" ********\n", 
			"********\n", 
			" ********\n");
}
