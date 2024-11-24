/*
2-3 Modify the program of Programming Project 2 so that it prompts the user to enter the radius
of the sphere.
*/

#include <stdio.h>

#define PI 3.14159

int main(void) 
{
	int radius = 0;
	printf("\n%s", "Enter the radius of the sphere >> ");
	scanf("%d", &radius);

	float volumeOfSphere = (4.0f / 3.0f) * PI * (radius * radius * radius);
	printf("The volume of a sphere with a %d meter radius is: %.2f\n\n", radius, volumeOfSphere);
}
