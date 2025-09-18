/* Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n. 
 *
For example, if the user enters 100, the program should print the following:

4
16
36
64
100

*/

#include <stdio.h>

int main(void) {

	int number = 0;
	printf("%s", "Enter a number: ");
	scanf("%d", &number);

	for (int x = 2; x * x <= number; x++) {

		if (x % 2 == 0){
			printf("%d\n", x * x);
		} 

	}

	return 0;
}

/*
Output:

 Enter a number: 100
4
16
36
64
100

 * /
