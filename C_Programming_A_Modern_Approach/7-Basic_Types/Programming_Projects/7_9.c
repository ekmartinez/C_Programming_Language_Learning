/* Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11

See Programming Project 8 for a description of the input format.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{	
	int hours = 0; 
	int minutes = 0;
	char meridiem [3] = "";

	printf("\n%s", "Enter a 12-hour time: "); 
	scanf("%d:%d %s", &hours, &minutes, meridiem);

	if (strcmp(meridiem, "AM") == 0) { 
		if (hours == 12) { hours = 0; }
	} else if (strcmp(meridiem, "PM") == 0) { 
		if (hours != 12) { hours += 12; }
	}

	printf("%s%02d:%02d\n\n", "Equivalent 24-hour time: ", hours, minutes);

	return 0;
}

/*
Output:
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11

*/

/*
Rules FOR CONVERSION

AM hours
From 12:00 AM (midnight) to 12:59 AM → replace the “12” with 00.
Example: 12:30 AM → 00:30

From 1:00 AM to 11:59 AM → leave the hour as is.
Example: 7:45 AM → 07:45

PM hours
From 12:00 PM (noon) to 12:59 PM → keep as is.
Example: 12:15 PM → 12:15

From 1:00 PM to 11:59 PM → add 12 to the hour.
Example: 3:20 PM → 15:20
Example: 11:59 PM → 23:59
*/
