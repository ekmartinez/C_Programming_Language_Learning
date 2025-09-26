/*
Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:

Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.

*/

#include <stdio.h>
#include <ctype.h>

int vowelCounter(char c);

int main(void) {
	char c;
	int sumOfVowel = 0;
	printf("\n%s", "Enter a sentence: ");

	while ((c = getchar()) != '\n') { 
		if (vowelCounter(c) == 1) { sumOfVowel++; } 
	}
	printf("\nYour sentence contains %d vowels.\n", sumOfVowel);

	return 0;
}

int vowelCounter(char c) {
	switch(tolower(c)) {
		case 'a': case 'e': 
		case 'i': case 'o': case 'u': 
		return 1; 
	}
}
