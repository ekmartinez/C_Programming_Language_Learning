/*
Write a program that translates an alphabetic phone number into numeric form:

Enter phone number: CALLATT
2255288

(In case you don’t have a telephone nearby, here are the letters on the keys: 

2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) 

If the original phone number contains nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

Enter phone number: 1-800-COL-LECT

1-800-265-5328

You may assume that any letters entered by the user are upper case.
*/

#include <stdio.h>

char translate_phone(char c);

int main(void) 
{
	char c;
	printf("\n%s", "Enter phone number: ");

	while ((c = getchar()) != '\n') {
		printf("%c", translate_phone(c));
	}

	puts("\n");

	 return 0;
}

char translate_phone(char c)  {
	switch (c) {
		case 'A': case 'B': case 'C': return '2';
		case 'D': case 'E': case 'F': return '3';
		case 'G': case 'H': case 'I': return '4';
		case 'J': case 'K': case 'L': return '5';
		case 'M': case 'N': case 'O': return '6';
		case 'P': case 'R': case 'S': return '7';
		case 'T': case 'U': case 'V': return '8';
		case 'W': case 'X': case 'Y': return '9';
		default: return c;
	}
}

/*
Output:

Enter phone number: CALLATT
2255288

Enter phone number: 1-800-COL-LECT
1-800-265-5328

*/
