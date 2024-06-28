
/*
2.24 (Odd or Even) Write a program that reads an integer 
and determines and prints whether it’s odd or even. 
[Hint: Use the remainder operator. An even number is a 
multiple of two. Any multiple of two leaves a remainder 
of zero when divided by 2.]
*/

#include <stdio.h>

int main(void)
{

	// Read Data from user
	int integer = 0;

	printf("%s\n", "Enter an integer: ");
	scanf("%d", &integer);

	if (integer % 2 == 0){
		printf("%s\n", "Even");
	}
	else {
		printf("%s\n", "Odd");	
	}

	return 0;
}
