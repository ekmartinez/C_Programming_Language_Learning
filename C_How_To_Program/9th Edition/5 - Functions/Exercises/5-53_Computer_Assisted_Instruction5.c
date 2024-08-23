/*
5.53 (Computer-Assisted Instruction: Varying the Types of Problems) Modify the program
of Exercise 5.52 to allow the user to pick a type of arithmetic problem to study.
An option of 1 means addition problems only, 2 means subtraction problems only, 3
means multiplication problems only and 4 means a random mixture of all these types.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototyping
int questions(int t, int d);
void feedback(int o);
void difficultyOptions(void);
void arithmeticOptions(void);
int addition(int addend, int augend);
int subtraction(int minuend, int subtrahend);
int multiplication(int multiplicand, int multiplier);

int main(void) {
    // Start Menu
    printf("\n%s\n", "Computer Assisted Instruction");
    printf("%s\n", "----------------------------");

    // Arithmetic Options
    int type = 0;
    arithmeticOptions();
    printf("\n%s", "Choose an option >>> ");
    scanf("%d", &type);

    switch(type) {
        case 1:
            printf("%s\n", "Topic: Addition");
            break;
        case 2:
            printf("%s\n", "Topic: Subtraction");
            break;
        case 3:
            printf("%s\n", "Topic: Multiplication");
            break;
        case 4:
            printf("%s\n", "Topic: Mixed");
            break;
    }

    // Difficulty selection
    int difficulty = 0;
    difficultyOptions();
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
    int counter = numberOfQuestions - numberOfQuestions;
    double passed = .75;

    do {

        if (type == 1 && difficulty == 1) {
            solution = questions(1, 1);
        }
        else if (type == 1 && difficulty == 2) {
            solution = questions(1, 2);
        }
        else if (type == 1 && difficulty == 3) {
            solution = questions(1, 3);
        }
        else if (type == 2 && difficulty == 1) {
            solution = questions(2, 1);
        }
        else if (type == 2 && difficulty == 2) {
            solution = questions(2, 2);
        }
        else if (type == 2 && difficulty == 3) {
            solution = questions(2, 3);
        }
        else if (type == 3 && difficulty == 1) {
            solution = questions(3, 1);
        }
        else if (type == 3 && difficulty == 2) {
            solution = questions(3, 2);
        }
        else if (type == 3 && difficulty == 3) {
            solution = questions(3, 3);
        }
        else if (type == 4 && difficulty == 1) {
            solution = questions(4, 1);
        }
        else if (type == 4 && difficulty == 2) {
            solution = questions(4, 2);
        }
        else if (type == 4 && difficulty == 3) {
            solution = questions(4, 3);
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
        if (counter == numberOfQuestions) {
            double percentage = ((double)correct / numberOfQuestions) * 100;
            printf("\n%s\n%s\n", "Summary", "--------------------");
            printf("%s%d\n", "Correct Answers: ", correct);
            printf("%s%d\n", "Wrong Answers: ", wrong);
            printf("%s%.2f%s\n", "Percentage: ", percentage, "%");

            if (percentage < passed) {
                printf("\n%s\n\n", "Please ask your teacher for extra help.");
            }
            else if (percentage >= passed) {
                printf("\n%s\n\n", "Congratulations, you are ready to go to the next level!");
            }
            break;
        }
    } while(1);
} // End main

void difficultyOptions(void) {
    printf("\n%s\n", "Dificulty:");
    printf("%s\n", "1 - Easy (One digit questions)");
    printf("%s\n", "2 - Intermediate (Two digit questions)");
    printf("%s\n", "3 - Advanced (Three digit questions)");
}

void arithmeticOptions(void) {
    printf("%s\n", "Arithmetic options:");
    printf("%s\n", "1 - Addition");
    printf("%s\n", "2 - Subtraction");
    printf("%s\n", "3 - Multiplication");
    printf("%s\n", "4 - Mixed");
}

int addition(int addend, int augend) {
   int sum = addend + augend;
   printf("\n%d + %d = ?\n", addend, augend);
   return sum;
}

int subtraction(int minuend, int subtrahend) {
    int difference = minuend - subtrahend;
    printf("\n%d - %d = ?\n", minuend, subtrahend);
    return difference;
}

int multiplication(int multiplicand, int multiplier) {
    int product = multiplicand * multiplier;
    printf("\n%d x %d = ?\n", multiplicand, multiplier);
    return product;
}

int questions(int type, int difficulty) {
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

    int question = 0;
    int firstOperand = min + rand() % max;
    int secondOperand = min + rand() % max;

    if (type == 1) {
        // Addition
        question = addition(firstOperand, secondOperand);
    }
    else if (type == 2) {
        // Subtraction
        question = subtraction(firstOperand, secondOperand);
    }
    else if (type == 3) {
        // Multiplication
        question =  multiplication(firstOperand, secondOperand);
    }
    else if (type == 4) {
        // Problem randomization
        int randomProblem = 1 + rand() % 3;
        switch(randomProblem) {
            case 1:
                question = addition(firstOperand, secondOperand);
                break;
            case 2:
                question = subtraction(firstOperand, secondOperand);
                break;
            case 3:
                question = multiplication(firstOperand, secondOperand);
                break;
        }
    }
    return question;
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
