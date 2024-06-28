/*
3.25 (Tabular Output) Write a program that utilizes looping to produce the following table of
values:
*/


#include <stdio.h>

int main(void)
{
	unsigned int cnt = 7;

	//Print header
	printf("A\tA+3\tA+6\tA*9\n\n");

	while(cnt < 36) {
		printf("%d\t%d\t%d\t%d\n", (cnt), (cnt + 3),(cnt + 6),(cnt * 9)); 
		cnt += 7;
	}

	return 0;
}
