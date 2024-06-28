/*
3.24 (Tabular Output) Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
*/


#include <stdio.h>

int main(void)
{
	unsigned int cnt = 1;

	//Print header
	printf("N\tN^2\tN^3\tN^4\n");

	while(cnt < 11) {
		printf("%d\t%d\t%d\t%d\n", (cnt), (cnt * cnt),(cnt * cnt * cnt),(cnt * cnt * cnt * cnt)); 
		cnt++;
	}

	return 0;
}
