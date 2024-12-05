/*
Write a program that asks the user for a 24-hour time, 
then displays the time in 12-hour form:

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>

int main(void)
{
	int hour, minute;

	printf("\n%s", "Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);
	
	if (hour == 0) {
		hour = 12;
		printf("%s%02d:%02d %s\n", "Equivalent 12-hour time: ", hour, minute, "AM"); 
	}
	else if (hour == 12)
		printf("%s%02d:%02d %s\n", "Equivalent 12-hour time: ", hour, minute, "PM"); 
	else if (hour > 12 && hour <= 24) 
		printf("%s%02d:%02d %s\n", "Equivalent 12-hour time: ", hour - 12, minute, "PM");
	else 
		printf("%s%02d:%02d %s\n", "Equivalent 12-hour time: ", hour, minute, "AM"); 
}
