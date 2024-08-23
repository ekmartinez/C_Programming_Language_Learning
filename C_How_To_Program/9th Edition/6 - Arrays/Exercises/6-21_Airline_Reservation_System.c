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

/*
** MINOR FIXES ARE NEEDED **
*/

#include <stdio.h>
#define SIZE 10

void boardingPass(int class, int seat);
void arrayBoundaries(int class);
int seatsAvailable(int array[], int class);
int seatsSelection(int array[], int class);

// Initialize array boundaries globally
int startArray = 0;
int endArray = 0;

// Function Main begins program execution
int main(void) {
    int option = 0; // If no seats available
    int availability = 0; //
    int seats[SIZE] = {0};

    char firstPrompt[] = "Please type 1 for \"first class\"\n"
                            "Please type 2 for \"economy\"\n"
                            ">>> ";

    char secondPrompt[] = "No First Class seats available,\n"
                            "would you like to reserve in \"Economy\"?\n"
                            "(1 - yes | 2 - no) >>> ";

    char denyAlternative[] = "\"Next flight leaves in 3 hours.\"";

    do {
        int class = 0;

        printf("\n%s", firstPrompt);
        scanf("%d", &class);

        switch(class) {
            case 1:
                // First class
                arrayBoundaries(class); // 0 - 5
                availability = seatsAvailable(seats, class);

                if (availability > 0) {
                    seatsSelection(seats, class);
                }
                else {
                    printf("\n%s", secondPrompt);
                    scanf("%d", &option);

                    switch(option) {
                        case 1:
                            class = 2;
                            arrayBoundaries(class); // 5 - 10
                            availability = seatsAvailable(seats, class);

                            if (availability == 0) {
                                printf("\n%s\n", "There are no seats availble in First Class.");
                                printf("\n%s\n", denyAlternative);
                            }
                            else {
                                seatsSelection(seats, class);
                            }
                            break;
                        case 2:
                            printf("\n%s\n", denyAlternative);
                            break;
                        default:
                            puts("\nInvalid option");
                            break;
                    }
                }
                break;

            case 2:
                // Second class
                arrayBoundaries(class); // 5 - 10
                availability = seatsAvailable(seats, class);

                if (availability > 0) {
                    seatsSelection(seats, class);
                }
                else {
                    printf("\n%s\n", firstPrompt);
                    scanf("%d", &option);

                    switch(option) {
                        case 1:
                            class = 1;
                            arrayBoundaries(class); // 0 - 5
                            availability = seatsAvailable(seats, class);

                            if (availability == 0) {
                                printf("\n%s\n", "There are no seats availble in Economy.");
                                printf("\n%s\n", denyAlternative);
                            }
                            else {
                                seatsSelection(seats, class);
                            }
                            break;
                        case 2:
                            printf("\n%s\n", denyAlternative);
                            break;
                        default:
                            puts("\nInvalid option");
                            break;
                    }

                }
                break;
        }
    } while(1);
}

// Sets array boundaries
void arrayBoundaries(int class) {
    switch(class) {
        case 1:
            startArray = 0;
            endArray = 5;
            break;
        case 2:
            startArray = 5;
            endArray = 10;
            break;
    }
}

// Assigns available seat
int seatsSelection(int array[], int class) {

    for (size_t seat = startArray; seat < endArray; ++seat) {
        if (array[seat] == 0) {
            array[seat] = 1;
            boardingPass(class, seat);
            return 0;
        }
    }
    return 1;
}

// Checks if there are seats available
int seatsAvailable(int array[], int class) {

    int seats = 0;

    for (size_t seat = startArray; seat < endArray; ++seat) {
        if (array[seat] == 0) {
            seats++;
        }
    }
    return seats;
}

void boardingPass(int class, int seat) {

    printf("\n%s\n", "Boarding Pass");
    printf("%s\n", "-------------");
    if (class == 1) {
        printf("%s\n", "First Class");
    }
    else if (class == 2) {
        printf("%s\n", "Economy");
    }
    printf("%s%d\n", "Seat: ", seat);
    printf("%s\n", "-------------");
}



















