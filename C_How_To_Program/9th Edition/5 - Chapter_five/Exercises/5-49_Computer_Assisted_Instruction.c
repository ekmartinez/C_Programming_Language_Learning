/*
5.49 (Computer-Assisted Instruction) The use of computers in education is referred
to as computer-assisted instruction (CAI). Write a program that will help an elementary-school
student learn multiplication. Use the rand function to produce two positive one-digit integers.

The program should then prompt the user with a question, such as How much is 6 times 7?
The student then inputs the answer. Next, the program checks the student’s answer.
If it’s correct, display the message "Very good!" and ask another multiplication question.
If the answer is wrong, display the message "No. Please try again." and let the student try
the same question repeatedly until the student finally gets it right.

A separate function should be used to generate each new question. This function should
be called once when the application begins execution and each time the user answers the question
correctly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int question(void);

int main(void) {
    srand(time(NULL));
    int answer = 0;
    int solution = 0;

    do {
        solution = question();
        printf("%s", "Type your answer >>> ");
        scanf("%d", &answer);
        if (answer == solution) {
           printf("%s\n", "Very good!");
        }
        else {
            while(1) {
                printf("No. Please try again >>> ");
                scanf("%d", &answer);
                if (answer == solution) {
                    printf("%s\n", "Very good!");
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

/*
How much is 7 times 2?
Type your answer >>> 14
Very good!

How much is 2 times 2?
Type your answer >>> 4
Very good!

How much is 8 times 1?
Type your answer >>> 1
No. Please try again >>> 2
No. Please try again >>> 3
No. Please try again >>> 8
Very good!

How much is 1 times 5?
Type your answer >>> CTRL + C
...end
*/
