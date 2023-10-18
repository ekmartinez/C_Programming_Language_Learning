/*
 3.22 (Checking if a Number is Prime) A prime number is any natural number greater than 1 that
is divisible only by 1 and by itself. Write a C program that reads an integer and determines whether
it is a prime number or not.
 */

#include <stdio.h>
#include <math.h>


int main(void) 
{
	// This exercise is under construction.
	
	int number = 0;
	unsigned bool_value = 0;
	unsigned counter = 3;

	printf("Enter a number and I'll tell whether it is prime or not >>> ");
	scanf("%d", &number);

	if (number <= 1){
		bool_value = 0;
	}
	if (number == 2){
		bool_value = 1;
	}
	if (number % 2 == 0){
		bool_value = 0;
	}

}
