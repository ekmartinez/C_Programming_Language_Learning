// Pasing arrays and individual array elements to functions.

#include <stdio.h> 
#define SIZE 5

// function prototypes
void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void)
{ 
	int a[SIZE] = {0, 1, 2, 3, 4};

	puts("Effects of passing entire array by reference3:\n\nThe "
			"values of the original array are:");

	// output original array
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%3d", a[i]);
	}
	puts("");


	modifyArray(a, SIZE);
}
