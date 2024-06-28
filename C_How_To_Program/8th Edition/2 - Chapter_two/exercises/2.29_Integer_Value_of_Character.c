/*
2.29 (Integer Value of a Character) 

Here’s a peek ahead. In this chapter you learned 
about integers and the type int. C can also represent 
uppercase letters, lowercase letters and a considerable 
variety of special symbols. C uses small integers internally 
to represent each different character. The set of characters 
a computer uses together with the corresponding integer 
representations for those characters is called that computer’s 
character set. You can print the integer equivalent of uppercase A, 
for example, by executing the statement

printf( "%d", 'A' );

Write a C program that prints the integer equivalents of some 
uppercase letters, lowercase letters, digits and special symbols. 
As a minimum, determine the integer equivalents of the following: 
A B C a b c 0 1 2 $ * + / and the blank character.
 */
#include <stdio.h>

int main(void) 
{
		
	printf( "%s%d\n", "Integer equivalent of A is: ", 'A');
	printf( "%s%d\n", "Integer equivalent of B is: ", 'B'); 
	printf( "%s%d\n", "Integer equivalent of C is: ", 'C');
	printf( "%s%d\n", "Integer equivalent of a is: ", 'a');
	printf( "%s%d\n", "Integer equivalent of b is: ", 'b');
	printf( "%s%d\n", "Integer equivalent of c is: ", 'c');
	printf( "%s%d\n", "Integer equivalent of 0 is: ", '0');
	printf( "%s%d\n", "Integer equivalent of 1 is: ", '1');
	printf( "%s%d\n", "Integer equivalent of 2 is: ", '2');
	printf( "%s%d\n", "Integer equivalent of $ is: ", '$');
	printf( "%s%d\n", "Integer equivalent of * is: ", '*');
	printf( "%s%d\n", "Integer equivalent of + is: ", '+');
	printf( "%s%d\n", "Integer equivalent of / is: ", '/');
	printf( "%s%d\n", "Integer equivalent of blank is: ", ' ');
	
	return 0;
}
