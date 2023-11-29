#include <stdio.h>
#define SIZE 15

// function prototype
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

int main(void) 
{
	int a[SIZE];

	// create data 
	for (size_t i = 0; i < SIZE; ++i) {
		a[i] = 2 * i;
	}

	printf("%s", "Enter a number between 0 and 28: ");
	int key; // value to locate in array a
	scanf("%d", &key);

	printHeader();

	// Search for key in array a
	size_t result = binarySearch(a, key, 0, SIZE - 1);

	// display results
	if(result != -1) {
		printf("\n%d found at index %ld\n", key, result);
	}
	else {
		printf("\n%d not found\n", key);
	}
	return 0;
}

// function to perfomr binary search of an array

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high) {

	// loop until low index is greater tahn high index
	while(low <= high) {
		
		// determine middle element of subarray being searched
		size_t middle = (low + high) / 2;

		// display subarray used in this loop iteration
		printRow(b, low, middle, high);

		// if searchKey matched middle element, return middle
		if (searchKey == b[middle]) {
			return middle;
		}

		// if searchkey is less tahn middle element, set new high
		else if (searchKey < b[middle]) {
			high = middle - 1; // search low end of array
		}
		// if searchKey is greaer than middle element, set new low
		else {
			low = middle + 1; // search high end of array
		}
	}
	return -1; // searchKey not found
}

// Print a header for the output
void printHeader(void) {
	puts("\nInidices:");

	// output column head
	for (unsigned int i = 0; i < SIZE; ++i) {
		printf("%3u ", i);
	}

	puts("");

	//output line of - characters
	for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
		printf("%s", "-");
	}

	puts("");
}

// Print one row of output showing the current
// part of the array being processed.
void printRow(const int b[], size_t low, size_t mid, size_t high) {
	
	for (size_t i = 0; i < SIZE; ++i) {

		// display spaces if outside current subarray range
		if (i < low || i > high) {
			printf("%s", "    ");
		}
		else if (i == mid) { // display middle element.
			printf("%3d*", b[i]); // mark middle value
		}
		else {
			printf("%3d ", b[i]);
		}

	}
}

