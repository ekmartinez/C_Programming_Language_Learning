#include <stdio.h>

void staticArrayInit(void); // function prototype
void automaticArrayInit(void); // function prototype

int main(void) 
{
	puts("First call to each function:");
	staticArrayInit();
	automaticArrayInit();

	puts("Second call to each function:");
	staticArrayInit();
	automaticArrayInit();

	return 0;
}

/// function to demostrate a static local array
void staticArrayInit(void){

	// initialize elements to 0 before the function is called
	static int array1[3];

	puts("\nValues on entering staticArrayInit:");

	// output contents of array1
	for (size_t i = 0; i <= 2; ++i) {
		printf("array[%lu] = %d ", i, array1[i]);
	}
	puts("\nValues on exiting staticArrayInit:");

	// modify and output contents of array1
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%lu] = %d ", i, array1[i] += 5);
	}
}

// function to demostrate a static local array
void automaticArrayInit(void){

	// initialize elements to 0 before the function is called
	static int array2[3];

	puts("\nValues on entering automaticArrayInit:");

	// output contents of array1
	for (size_t i = 0; i <= 2; ++i) {
		printf("array[%lu] = %d ", i, array2[i]);

	}

	// modify and output contents of array2
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%lu] = %d ", i, array2[i] += 5);
	}


}
