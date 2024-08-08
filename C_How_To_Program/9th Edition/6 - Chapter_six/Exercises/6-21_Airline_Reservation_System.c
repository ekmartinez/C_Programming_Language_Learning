/*
6.21 (Airline Reservations System) A small airline has just purchased a computer for
its new automated reservations system. The president has asked you to program the
new system. You’ll write a program to assign seats on each flight of the airline’s only
plane (capacity: 10 seats).

Your program should display the following menu of alternatives:
Please type 1 for "first class"
Please type 2 for "economy"

If the person types 1, assign a seat in the first-class section (seats 1–5). If the person
types 2, assign a seat in the economy section (seats 6–10). Your program should then print a
boarding pass indicating the person's seat number and whether it’s in the first-class or economy
section of the plane.

Use a one-dimensional array to represent the plane’s seating chart. Initialize all
the elements of the array to 0 to indicate that all seats are empty. As each seat is
assigned, set the corresponding element of the array to 1 to indicate that the seat is
no longer available.

Your program should, of course, never assign a seat that has already been assigned.
When the first-class section is full, your program should ask the person if it’s acceptable
to be placed in the economy section (and vice versa). If yes, then make the appropriate
seat assignment. If no, then print the message, "Next flight leaves in 3 hours."
*/

#include <stdio.h>
#define SIZE 10

void boardingPass(int class, int seat);

int main(void) {

    int option = 0;
    int seatingChart[SIZE] = {0};

    do {
        int seat = 0;
        printf("\n%s\n", "Please type 1 for \"first class\"");
        printf("%s\n", "Please type 2 for \"economy\"");
        printf("%s\n", "Please type 3 to exit.");
        printf("%s", ">>> ");
        scanf("%d", &option);

        if (option == 3) {
            break;
        }

        int noSeat = 0;

        switch(option) {
            case 1:
                puts("Firts class");
                for (size_t s = 0; s < 5; ++s) {
                    if (seatingChart[s] == 0){
                        seatingChart[s] = s;
                        boardingPass(1, s);
                        break;
                    }
                }

                printf("%s\n", "No First Class seats available,");
                printf("%s\n", "would you like to reserve in \"Economy\"?");
                printf("%s", " (1 - yes | 2 - no) >>> ");
                scanf("%d", &noSeat);
                if (noSeat == 1) {
                    for (size_t s = 5; s < 10; ++s) {
                        if (seatingChart[s] == 0){
                            seatingChart[s] = s;
                            boardingPass(2, s);
                            break;
                        }
                    }

                }
                puts("\"Next flight leaves in 3 hours.\"");
                break;

            case 2:
                puts("Economy");
                break;
            default:
                puts("You have entered an invalid option");
                break;
        }

    } while(1);
}

void boardingPass(int class, int seat) {

    printf("%s\n", "Boarding Pass");
    printf("%s\n", "-------------");
    if (class == 1) {
        printf("%s\n", "First Class");
    }
    else if (class == 2) {
        printf("%s\n", "Economy");
    }
    printf("%s%d", "Seat: ", seat);
}


















