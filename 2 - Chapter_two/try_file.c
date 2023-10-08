

#include <stdio.h>

int main(void) {

    int total_seconds;

    printf("How many seconds have passed since event: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = (total_seconds % 3600) % 60;

    printf("\n%d:%d:%d\n", hours, minutes, seconds);

    return 0;

} // End main


















// End main
 //
/*

EEEEEEEEE
E
EEEEE
E
EEEEEEEEE

ZZZZZZZZZ
        Z
    Z
Z
ZZZZZZZZZ

W       W
W       W
W   W   W
W  W W  W 
W W   W W
*/
