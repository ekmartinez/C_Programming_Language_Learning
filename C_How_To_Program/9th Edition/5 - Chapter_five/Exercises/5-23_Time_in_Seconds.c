/*
5.23 (Time in Seconds) Write a function that takes the time as three integer arguments
(for hours, minutes and seconds) and returns the number of seconds since the
last time the clock “struck 12.” Use this function to calculate the amount of time in
seconds between two times, both of which are within one 12-hour cycle of the clock.
*/

#include <stdio.h>

int timeInSeconds(int h, int m, int s);

int main(void) {
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    printf("%s", "Enter hour, minutes & seconds (space separated): ");
    scanf("%d%d%d", &hours, &minutes, &seconds);

    printf("%d\n", timeInSeconds(hours, minutes, seconds));
}

int timeInSeconds(int hours, int minutes, int seconds) {

    if (hours == 12) {
        hours = 0;
    }

    int hoursToSeconds = hours * (60*60);
    int minutesToSeconds = minutes * 60;
    int secondsElapsed = hoursToSeconds + minutesToSeconds + seconds;

    return secondsElapsed;
}

/*
**Test Case 1: Midnight (12:00:00)**

* Input:
        + hours: 0
        + minutes: 0
        + seconds: 0
* Expected output: 0 seconds since last strike at 12:00:00

**Test Case 2: One minute after midnight**

* Input:
        + hours: 0
        + minutes: 1
        + seconds: 0
* Expected output: 60 seconds since last strike at 12:00:00

**Test Case 3: Fifteen minutes after midnight**

* Input:
        + hours: 0
        + minutes: 15
        + seconds: 0
* Expected output: 900 seconds since last strike at 12:00:00

**Test Case 4: One hour and thirty minutes after midnight**

* Input:
        + hours: 1
        + minutes: 30
        + seconds: 0
* Expected output: 5400 seconds since last strike at 12:00:00

**Test Case 5: One minute before noon (11:59:59)**

* Input:
        + hours: 11
        + minutes: 59
        + seconds: 59
* Expected output: 43199 seconds since last strike at 12:00:00

**Test Case 6: Noon (12:00:00)**

* Input:
        + hours: 12
        + minutes: 0
        + seconds: 0
* Expected output: 0 seconds since last strike at 12:00:00

**Test Case 7: One minute after noon**

* Input:
        + hours: 1
        + minutes: 1
        + seconds: 0
* Expected output: 3660 seconds since last strike at 12:00:00
*/
