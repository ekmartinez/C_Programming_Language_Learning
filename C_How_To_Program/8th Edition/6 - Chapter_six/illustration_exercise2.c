// Initializing the elements of array s to the even integers from 2 to 10.

#include <stdio.h>
#define SIZE 5 // Maximum size of array

int main(void) 
{

	int s[SIZE];

	// Populate array
	for (size_t j = 0; j < SIZE; ++j) {
		s[j] = 2 + 2 * j;
	}

	printf("%s%13s\n", "Element", "Value");
	
	// Output content
	for (size_t j = 0; j < SIZE; ++j) {
		printf("%7lu%13d\n", j, s[j]);
	}
}
