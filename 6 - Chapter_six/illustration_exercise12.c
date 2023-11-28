// computing the mean, median and mode of the data


#include <stddef.h>
#include <stdio.h> 
#define SIZE 99

// function prototypes
void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(int a[]);
void printArray(unsigned const int a[]);

int main(void)
{
	unsigned int frequency[10] = {0};

	// initialize array response
	unsigned int response[SIZE] = 
	{6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
	7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
	6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
	7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
	6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
	7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
	5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
	7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
	4, 5, 6, 1, 6, 5, 7, 8, 7};
	
	// process responses
	mean(response);
	median(response);
	mode(frequency, response);

	return 0;
}

void mean(const unsigned int answer[]){

	printf("%s\n%s\n%s\n", "********", "  Mean", "********");

	unsigned int total = 0; // variable to hold sum of array elements

	// total response values
	for (size_t j = 0; j < SIZE; ++j){
		total += answer[j];
	}

	printf("The mean is the averag value of the data\n"
			"items. The mean is equal to the total of\n"
			"all the data items divided byt the number\n"
			"of data items (%u). The mean value for\n"
			"this run is: %u / %u = %.4f\n\n",
			SIZE, total, SIZE, (double) total /SIZE);
}

void median(unsigned int answer[]) {

	printf("\n%s\n%s\n%s\n%s",
			"*******", " Median", "********",
			"The unsorted array of responses is");

	printArray(answer); // output unsorted array
	bubbleSort(answer); // sort array

	// display median element
	printf("\n\nThe median is element %u of \n"
			"the sorted %u element array.\n"
			"For this run the median is %u\n\n",
			SIZE / 2, SIZE, answer[SIZE / 2]); 
}

void mode(unsigned int freq[], const unsigned int answer[]) {
	
	printf("\n%s\n%s\n%s\n", "********", "  Mode", "********");

	//initialize frequencies to 0
	for (size_t rating = 1; rating <= 9; ++rating){
		freq[rating] = 0;
	}
	 // summarize frequencies
	for (size_t j = 0; j < SIZE; ++j) {
		++freq[answer[j]];
	}

	// output headers for rsult columns
	printf("%s%11s%19s\n\n%54s\n%54s\n\n",
			"Response", "Frequency", "Histogram",
			"1	1	2	2", "5	0	5	0	5");
}

