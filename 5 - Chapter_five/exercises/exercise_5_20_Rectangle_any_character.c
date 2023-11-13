/*
 5.20 (Displaying a Rectangle of Any Character) Modify the function created in Exercise 5.19 to
form the rectangle out of whatever character is contained in character parameter fillCharacter. Thus
if the sides are 5 and 4, and fillCharacter is "@", then the function should print the following:

@@@@@
@@@@@
@@@@@
@@@@@

*/

#include <stdio.h>

int square(int h, int v, char c);

int main (void)
{
	int h_side = 0;
	int v_side =0;
	char character;

	printf("\nEnter horizontal side >>> ");
	scanf("%d", &h_side);
	printf("Enter vertical side >>> ");
	scanf("%d", &v_side);
	printf("Enter any Character >>> ");
	scanf(" %c", &character);

	square(h_side, v_side, character);
	
	return 0;
}

int square(int h, int v, char c) {

	for (v = v; v > 0; v--) {

		int temp_h = 0;

		for (temp_h = h; temp_h > 0; temp_h--) {
			printf(" %c", c);

		}
		
		puts("");
		

	}
	return 0;

}

