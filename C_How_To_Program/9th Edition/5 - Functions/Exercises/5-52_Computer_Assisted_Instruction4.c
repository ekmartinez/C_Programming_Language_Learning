/*
5.52 (Computer-Assisted Instruction: Difficulty Levels) Exercises 5.49–5.51 developed a
computer-assisted instruction program to help teach an elementary-school student multiplication.
Modify the program to allow the user to enter a difficulty level. At a difficulty level of 1,
the program should use only single-digit numbers in the problems; at a difficulty level of 2,
numbers as large as two digits, and so on.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int question(int d);
void feedback(int o);

int main(void) {
    // Start Menu
    printf("\n%s\n", "Computer Assisted Instruction");
    printf("%s\n", "----------------------------");
    printf("%s\n", "Dificulty:");
    printf("%s\n", "1 - Easy (One digit questions)");
    printf("%s\n", "2 - Intermediate (Two digit questions)");
    printf("%s\n", "3 - Advanced (Three digit questions)");

    int difficulty = 0;
    printf("\n%s", "Choose a Dificulty Level >>> ");
    scanf("%d", &difficulty);

    switch(difficulty) {
        case 1:
            printf("%s\n", "Level: Easy");
            break;
        case 2:
            printf("%s\n", "Level: Intermediate");
            break;
        case 3:
            printf("%s\n", "Level: Advanced");
            break;
    }

    // main course
    int answer = 0;
    int solution = 0;
    int correct = 0;
    int wrong = 0;
    int numberOfQuestions = 10;
    int counter = 0;

    do {
        switch(difficulty) {
            case 1:
                solution = question(1);
                break;
            case 2:
                solution = question(2);
                break;
            case 3:
                solution = question(3);
                break;
        }
        printf("%s", "Type your answer >>> ");
        scanf("%d", &answer);
        if (answer == solution) {
            correct++;
            feedback(0);
        }
        else {
            wrong++;
            while(1) {
                feedback(1);
                scanf("%d", &answer);
                if (answer == solution) {
                    feedback(0);
                    break;
                }
            }
        }
        counter++;
        if (counter == 10) {
            double percentage = ((double)correct / numberOfQuestions) * 100;
            printf("\n%s\n%s\n", "Summary", "--------------------");
            printf("%s%d\n", "Correct Answers: ", correct);
            printf("%s%d\n", "Wrong Answers: ", wrong);
            printf("%s%.2f%s\n", "Percentage: ", percentage, "%");

            if (percentage < .75) {
                printf("\n%s\n\n", "Please ask your teacher for extra help.");
            }
            else if (percentage > .75) {
                printf("\n%s\n\n", "Congratulations, you are ready to go to the next level!");
            }
            break;
        }
    } while(1);
} // End main

int question(int difficulty) {
    srand(time(NULL));
    int min = 0;
    int max = 0;

    switch(difficulty) {
        case 1:
            min = 1;
            max = 9;
            break;
        case 2:
            min = 10;
            max = 99;
            break;
        case 3:
            min = 100;
            max = 999;
            break;
    }

    int multiplicand = min + rand() % max;
    int multiplier = min + rand() % max;
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
