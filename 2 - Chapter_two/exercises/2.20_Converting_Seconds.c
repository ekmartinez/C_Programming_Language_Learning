#include <stdio.h>

int main(void) {
    // Get data from user
    int seconds = 0;
    printf("%s", "Enter seconds elapsed: ");
    scanf("%d", &seconds);

    // Calculate hours, minutes, and seconds
    int hours = seconds / 3600;   // 1 hour = 3600 seconds
    int remaining_seconds = seconds % 3600;
    int minutes = remaining_seconds / 60;   // 1 minute = 60 seconds
    int seconds_left = remaining_seconds % 60;

    // Print the result in the desired format: HH:MM:SS
    printf("\n%02d:%02d:%02d\n", hours, minutes, seconds_left);
    return 0;
}
