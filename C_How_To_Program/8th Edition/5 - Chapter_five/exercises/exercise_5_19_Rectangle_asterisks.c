/*
 5.19 (Rectangle of Asterisks) Write a function that displays a solid rectangle of asterisks whose
sides are specified in the integer parameters side1 and side2. For example, if the sides are 4 and 5,
the function displays the following

*****
*****
*****
*****
*/

#include <stdio.h>

int square(int h, int v);

int main (void)
{
	int h_side = 0;
	int v_side =0;

	printf("\nEnter horizontal side >>> ");
	scanf("%d", &h_side);
	printf("Enter vertical side >>> ");
	scanf("%d", &v_side);

	square(h_side, v_side);
	
	return 0;
}

int square(int h, int v) {

	for (v = v; v > 0; v--) {

		int temp_h = 0;

		for (temp_h = h; temp_h > 0; temp_h--) {
			printf("*");

		}
		
		puts("");
		

	}
	return 0;

}
