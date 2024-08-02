/*
5.51 (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated
computer-assisted instruction systems monitor the student’s performance over a period of time.
The decision to begin a new topic is often based on the student’s success with previous topics.
Modify the program of Exercise 5.50 to count the number of correct and incorrect responses typed
by the student. After the student types 10 answers, your program should calculate the percentage that are correct.
If the percentage is lower than 75%, display "Please ask your teacher for extra help.", then reset the program so
another student can try it. If the percentage is 75% or higher, display "Congratulations, you are ready to go to the
next level!", then reset the program so another student can try it.
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
    int correct = 0;
    int wrong = 0;
    int numberOfQuestions = 10;
    int counter = 0;

    do {
        solution = question();
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
            double percentage = (double)correct / numberOfQuestions;
            printf("\n%s\n%s\n", "Summary", "--------------------");
            printf("%s%d\n", "Correct Answers: ", correct);
            printf("%s%d\n", "Wrong Answers: ", wrong);
            printf("%s%.2f\n", "Percentage: ", percentage);

            if (percentage < .75) {
                printf("\n%s\n\n", "Please ask your teacher for extra help.");
            }
            else if (percentage > .75) {
                printf("\n%s\n\n", "Congratulations, you are ready to go to the next level!");
            }
            break;
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
