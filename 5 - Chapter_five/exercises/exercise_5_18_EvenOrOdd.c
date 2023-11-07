/*
 5.18 (Even or Odd) Write a program that inputs a series of integers and passes them one at a time
to function isEven, which uses the remainder operator to determine whether an integer is even. The
function should take an integer argument and return 1 if the integer is even and 0 otherwise.
*/

#include <stdio.h>

int isEven(int number);

int main(void) 

{
	printf("\n---------------------Even or Odd ------------------------\n");
	
	printf("\nBelow you will have a chance to enter a series of integers,\n");
	printf("If the number is even it will return 1, if odd it will return 0.\n\n");
	
	
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	
	for (unsigned int counter  = 1; counter < 4; ++counter) {

		int temp_int = 0;

		printf("Enter integer # %d >>> ", counter);
		scanf("%d", &temp_int);

		switch(counter) {
			case 1:
				number1 = isEven(temp_int);
				break;
			
			case 2:
				number2 = isEven(temp_int);
				break;

			case 3:
				number3 = isEven(temp_int);
				break;
		}
	}
	
	printf("\nThe first integer returns %d", number1);
	printf("\nThe second integer returns %d", number2);
	printf("\nThe third integer returns %d\n\n", number3);

	return 0;
	
}


int isEven(int number) {

	if (number % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}



}
