// Graphing Array Element Values with Histograms


#include <stdio.h>
#define SIZE 5


int main(void) {

	// use initialez list to initialize array n
	int n[SIZE] = {19, 3, 15, 7, 11};

	printf("\n%s%13s%17s\n", "Element", "Value", "Histogram");

	// for each element of array n, output a bar fo the histogram
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%7u%13d       ", i, n[i]);

		for (int j = 1; j <= n[i]; ++j) {
			printf("%c", '*');
		}

		puts(""); 

	}

	

}
