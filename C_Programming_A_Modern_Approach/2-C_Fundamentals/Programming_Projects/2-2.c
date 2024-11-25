/*
Write a program that computes the volume of a sphere with a 10-meter radius, 
using the formula v = 4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f. 
(Try writing it as 4/3. What happens?) 

Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r 
by itself twice to compute r^3.
*/
#include <stdio.h>

#define PI 3.14159
#define RADIUS 10

int main(void) 
{
	float volumeOfSphere = (4.0f / 3.0f) * PI * (RADIUS * RADIUS * RADIUS);
	printf("\n%s", "The volume of a sphere with a 10-meter radius is: ");
	printf("%.2fm\n", volumeOfSphere);
	puts("");

	printf("%s", "What happens if used the following division (4/3), the results would be: ");
	volumeOfSphere = (4 / 3) * PI * (RADIUS * RADIUS * RADIUS);
	printf("%.2fm\n", volumeOfSphere);
	printf("%s\n", "Which is an incorrect result due to the resulting integer division (4/3)."); 
}
