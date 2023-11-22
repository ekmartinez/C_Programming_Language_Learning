// Summing elements of an array

#include <stdio.h> 
#define SIZE 12

int main(void) 
{
	// Array initializer
	int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
	int total = 0;

	// Sum content of array
	for (size_t i = 0; i < SIZE; ++i) {
		total += a[i];
	}

	printf("total of array element values is %d\n", total);
}
