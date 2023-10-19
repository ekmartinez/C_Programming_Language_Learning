/*
3.32 (Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20.
*/

#include <stdio.h>

int main(void) 
{
	int side = 0;

	while (1 + 2 == 3) {
		printf("\nEnter the size of  a square (1 - 20) >>> ");
		scanf("%d", &side);
		
		if (side < 1 || side > 20) {
			printf("You have entered an invalid value, valid sides are (1 - 20)\n");
		}
		else {

			printf("\n");

			int h_side = side;
			int v_side = side;

			while(v_side > 0) {
				int h_count = h_side;
				
				while(h_count > 0) {
					printf("*");
					h_count--;
				}

				printf("\n");
				v_side--;	
			}
			break;
		}
	}

	return 0;
}
