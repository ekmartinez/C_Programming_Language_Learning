// Passing Arrays to functions

#include <stddef.h>
#include <stdio.h>
#define SIZE 3

void array_printer(int arr[], size_t size);

int main(void)

{
	int sample_array[SIZE] = {1, 2, 3}; 
	array_printer(sample_array, SIZE);
	return 0;
}

void array_printer(int arr[], size_t size) {

	for (size_t x = 0; x < size; ++x){
		printf("%d - %p\n", arr[x], &arr[x]);

	}

}
