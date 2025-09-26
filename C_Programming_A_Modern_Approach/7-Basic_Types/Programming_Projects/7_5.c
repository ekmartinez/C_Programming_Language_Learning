/*

In the SCRABBLE Crossword Game, players form words using small tiles, each containing
a letter and a face value. The face value varies from one letter to another, based on the let-
ter’s rarity. 

(Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) 

Write a program that computes the value of a word by summing the values
of its letters:

Enter a word: pitfall
Scrabble value: 12

Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the toupper library function
*/

#include <stdio.h>
#include <ctype.h>

int get_scrabble_value(char c) {
	// So sorry about the mess,
	// but that's the way it is...
	switch(toupper(c)) {
		case 'A': case 'E': case 'I': 
		case 'L': case 'N': case 'O': 
		case 'R': case 'S': case 'T':
		case 'U': return 1;
		case 'D': case 'G': return 2;
		case 'B': case 'C': case 'M': 
		case 'P': return 3;
		case 'F': case 'H': case 'V': 
		case 'W': case 'Y': return 4;
		case 'K': return 5;
		case 'J': case 'X': return 8; 
		case 'Q': case 'Z': return 10;
		default: return 0;
	}
}

int main(void) 
{
	char c;
	int scrabble_value = 0;

	printf("\n%s", "Enter a word: ");
	while ((c = getchar()) != '\n') {
		scrabble_value += get_scrabble_value(c);
	}
	
	printf("%s%d\n\n", "Scrabble value: ", scrabble_value);
	
	return 0;
}

/*
Output:

Enter a word: pitfall
Scrabble value: 12

*/
