/*
4.21 (ASCII Values) Write a program to convert and print the characters for the ASCII values
0 to 127. The program should print 10 characters per line.
*/

// This solution may need improving, work later.

#include <stdio.h>

int main(void)
{

	for (int ch = 0; ch < 121; ch+=10) {
		printf("%c %c %c %c %c %c %c %c %c %c\n", ch, ch + 1, ch + 2, ch + 3, ch + 4, ch + 5, ch + 6, ch + 7, ch +8, ch + 9);
		
	}


}
