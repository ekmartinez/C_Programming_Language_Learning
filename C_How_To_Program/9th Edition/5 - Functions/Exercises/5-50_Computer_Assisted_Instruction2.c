/*
5.50 (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in
CAI environments is student fatigue. This can be reduced by varying the computer’s
responses to hold the student’s attention. Modify the program of Exercise 5.49 so
that various comments are displayed for each answer as follows:

Possible responses to a correct answer:
Very good!
Excellent!
Nice work!
Keep up the good work!

Possible responses to an incorrect answer:
No. Please try again.
Wrong. Try once more.
Don't give up!
No. Keep trying.

Use random-number generation to choose a number from 1 to 4 that will be used to select
one of the four appropriate responses to each correct or incorrect answer. Use a switch statement
to issue the responses.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int question(void);
void feedback(int o);

int main(void) {
    srand(time(NULL));
    int answer = 0;
    int solution = 0;

    do {
        solution = question();
        printf("%s", "Type your answer >>> ");
        scanf("%d", &answer);
        if (answer == solution) {
            feedback(0);
        }
        else {
            while(1) {
                feedback(1);
                scanf("%d", &answer);
                if (answer == solution) {
                    feedback(0);
                    break;
                }
            }
        }
    } while(1);
}

int question(void) {
    int multiplicand = 1 + rand() % 9;
    int multiplier = 1 + rand() % 9;
    printf("\nHow much is %d times %d?\n", multiplicand, multiplier);
    return multiplicand * multiplier;
}

void feedback(int option) {
    int choice = 1 + rand() % 4;
    if (option == 0) {
        // Correct answers
        switch(choice) {
            case 1:
                printf("%s\n", "You're pretty good!");
                break;
            case 2:
                printf("%s\n", "Excelent!");
                break;
            case 3:
                printf("%s\n", "Nice Work!");
                break;
            case 4:
                printf("%s\n", "Keep up the good work!");
                break;
        }
    }
    else if (option == 1) {
        // Wrong answers
        switch(choice) {
            case 1:
                printf("%s", "No, Please try again >>> ");
                break;
            case 2:
                printf("%s", "Wrong. Try once more >>> ");
                break;
            case 3:
                printf("%s", "Don't give up >>> ");
                break;
            case 4:
                printf("%s", "No. Keep trying >>> ");
                break;
        }
    }
}
/*
Output:

How much is 4 times 5?
Type your answer >>> 20
You're pretty good!

How much is 2 times 4?
Type your answer >>> 8
You're pretty good!

How much is 8 times 3?
Type your answer >>> 24
Excelent!

How much is 2 times 1?
Type your answer >>> 4
No. Keep trying >>> 1
No. Keep trying >>> 5
Wrong. Try once more >>> 2
Keep up the good work!

How much is 5 times 5?
Type your answer >>> CTRL + C
...end
*/
