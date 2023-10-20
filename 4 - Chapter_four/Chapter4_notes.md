# C Program Control

## Introduction
In this chapter, iteration is considered in greater detail, and additional iteration control statements, namely the `for` and the `do…while`, are presented. The `switch` multiple-selection statement is introduced. We discuss the `break` statement for exiting immediately from certain control statements, and the `continue` statement for skipping the remainder of the body of an iteration statement, then proceeding with the next iteration of the loop. The chapter discusses `logical operators` used for combining conditions, and summarizes the principles of `structured programming`.


## Iteration Essentials

A loop is a group of instructions the computer executes repeatedly while some loop-continuation condition remains true. We’ve discussed two means of iteration:

1. Counter-controlled iteration
2. Sentinel-controlled iteration

`Counter-controlled` iteration is sometimes called `definite iteration` because we know in advance exactly how many times the loop will be executed. In counter-controlled iteration, a `control variable` is used to count the number of iterations. The control variable is incremented (usually by 1) each time the group of instructions is performed. When the value of the control variable indicates that the correct number of iterations has been performed, the loop terminates and execution continues with the statement after the iteration statement.

**Counter-controlled iteration requires:**

1. The `name` of a control variable (or loop counter).
2. The `initial value` of the control variable.
3. The `increment` (or `decrement`) by which the control variable is modified each
time through the loop.
4. The condition that tests for the `final value` of the control variable (i.e., whether looping should continue).

**Example:**

```c
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1; // initialization

    while (counter <= 10) { // iteration statement
        printf("%u\n", counter);
        ++counter; // increment
    }
}
```
`Sentinel-controlled` iteration is sometimes called `indefinite iteration` because it’s not known in advance how many times the loop will be executed. 

**Sentinel values are used to control iteration when:**

1. The precise number of iterations isn’t known in advance, and
2. The loop includes statements that obtain data each time the loop is performed.

The sentinel value indicates “end of data.” The sentinel is entered after all regular data items have been supplied to the program. Sentinels must be distinct from regular data items.

## for Iteration Statement

The general format of the for statement is

`for` (*initialization*; *condition*; *increment*) {
    *statement*
}

Where the *initialization* expression initializes the loop-control variable, the *condition* expression is the loop-continuation condition and the *increment* expression increments the control variable. The comma operator is most often used in the `for` statement. Its primary use is to enable you to use multiple initialization and/or multiple increment expressions. For example, there may be two control variables in a single `for` statement that must be initialized and incremented.

The three expressions in the `for` statement are *optional*. If the *condition* expression is omitted, C assumes that the loop-continuation condition is *true*, thus creating an *infinite loop*. You may omit the *initialization* expression if the control variable is initialized before the `for` statement. The *increment* expression may be omitted if the increment is calculated by statements in the `for` statement’s body or if no increment is needed.

**Example:**

```c
#include <stdio.h>

int main(void) 
{
    unsigned int sum = 0; // initialize sum

    for (unsigned int number = 2; number <= 100; number +=2) {
        sum += number; // add number to sum
    }

    printf("Sum is %u\n", sum);
}

```
## switch Multiple-Selection Statement

Occasionally, an algorithm will contain a *series of decisions* in which a variable or expression is tested separately for eah of the constant integral values it may assume, and different actions are taken. This is called *multiple selection*. C provides the `switch` multiple-selection statement to handle such decision making. The switch statement consists of a series of case labels, an optional default case and statements to execute for each case.

The `switch` statement is used to perform multi-way branching, allowing you to select one of many blocks of code to be executed. It provides an efficient way to handle situations where you have multiple conditions to check against the same variable.

Example:

```c
#include <stdio.h>

int main() {
    int choice;
    
    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You chose Option 1\n");
            break;
        case 2:
            printf("You chose Option 2\n");
            break;
        case 3:
            printf("You chose Option 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
```
In this example:

* The user is prompted to enter a number.
* The `switch` statement checks the value of `choice`.
* If `choice` is `1`, it executes the code inside the `case 1:` block and then jumps to `break`;, exiting the `switch`.
* If `choice` is `2`, it executes the code inside the `case 2:` block and then exits the `switch`.
* If `choice` is `3`, it executes the code inside the `case 3:` block and then exits the `switch`.
* If `choice` is none of the above, it executes the code inside the `default:` block.
* The `break`; statement is used to exit the `switch` statement. If you forget to include `break`;, the control will fall through to the next `case` (or `default`) and execute its code.

This way, you can handle multiple conditions in an organized manner using the `switch` statement in C.

**Reading Character Input**

The `getchar` function (from <stdio.h>) reads one character from the keyboard and stores that character in the integer variable grade. Characters are normally stored in variables of type `char`. However, an important feature of C is that characters can be stored in any integer data type because they’re usually represented as one-byte integers in the computer. Function `getchar` returns as an `int` the character that the user entered. We can treat a character as either an integer or a character, depending on its use. 

**Constant Integral Expressions**

When using the *switch* statement, remember that each individual *case* can test only a `constant integral expression`, any combination of character constants and integer constants that evaluates to a constant integer value. A character constant can be represented as the specific character in single quotes, such as 'A'. Characters must be enclosed within single quotes to be recognized as character constants—characters in double quotes are recognized as strings. Integer constants are simply integer values.

## do..while Iteration Statement

The `do…while` iteration statement is similar to the *while* statement. In the *while* statement, the loop-continuation condition is tested at the beginning of the loop before the body of the loop is performed. The `do…while` statement tests the loop-continuation condition after the loop body is performed. Therefore, the loop body will always execute at least once. When a `do…while` terminates, execution continues with the statement after the *while* clause. 

The `do…while` statement is written as follows:

```c
do {
    statements
} while (condition); // semicolon is required here

```

Lets take a look at an example program that prints the numbers from 1 to 10.

```c
#include <stdio.h>

int main(void)
{
    unsigned int counter = 1; // initialize counter

    do {
        printf("%u ", counter);
    } while (++counter <= 10)
}
```

## break and continue Statements

The break and continue statements are used to alter the flow of control.

**break Statement**

The `break` statement, when executed in a while, for, do…while or switch statement, causes an immediate exit from that statement. Program execution continues with the next statement after that while, for, do…while or switch. Common uses of `break` are to escape early from a loop or to skip the remainder of a switch.

Example:

```c
#include <stdio.h>

int main(void)
{
    unsigned int x; // declare here so it can be used after loop
     // loop 10 times
     for (x = 1; x <= 10; ++x) {
        // if x is 5, terminate loop
        if (x == 5) {
            break; // break loop only if x is 5.
        }

        printf("%u ", x);
     }
     printf("\nBroke out of loop at x == %u\n", x);
}
```

**continue Statement**

The `continue` statement, when executed in a while, for or do…while statement, skips the remaining statements in that control statement’s body and performs the next iteration of the loop. In while and do…while statements, the loop-continuation test is evaluated immediately after the `continue` statement executes. In the for statement, the increment expression executes, then the loop-continuation test is evaluated.

Example:

```c
#include <stdio.h>

int main(void)
{
    // loop 10 times
    for (unsigned int x = 1; x <= 10; ++x) {

        // if x is 5, continue with next iteration of loop
        if (x == 5) {
            continue; // skip remaining code in the loop body
        }

        printf("%u ", x);
    }
    puts("\nUsed continue to skip printing the value 5");
}

```

## Structured Programming Summary

Structured programming produces programs that are easier (than unstructured programs) to understand and therefore are easier to test, debug, modify, and even prove correct in a mathematical sense.  In chapter 3 and 4 we discuss that small circles are used in the figure to indicate the *single entry point* and the *single exit point* of each statement. Connecting individual flowchart symbols arbitrarily can lead to unstructured programs. Therefore, the programming profession has chosen to combine flowchart symbols to form a limited set of control statements, and to build only properly structured programs by combining control statements in two simple ways.  

For simplicity, only *single entry/single-exit* control statements are used—there’s only one way to enter and only one way to exit each control statement. Connecting control statements in sequence to form structured programs is simple—the exit point of one control statement is connected to the entry point of the next—i.e., the control statements are simply placed one after another in a program—we’ve called this “control-statement stacking.” Control statements also can be nested.

The following are the rules for forming structured programs, 

1. Begin with the “simplest flowchart”
2. (`Stacking” rule`) Any rectangle (action) can be replaced by two rectangles (actions) in sequence.
3. (`Nesting rule`) Any rectangle (action) can be replaced by any control statement (sequence, if, if…else, switch, while, do…while or for).
4. Rules 2 and 3 may be applied as often as you like and in any order.

The rules assume that the rectangle flowchart symbol may be used to indicate any action including input/output. Repeatedly applying **Rule 2** to the simplest flowchart results in a structured flowchart containing many rectangles in sequence. **Rule 2** generates a stack of control statements; so we call **Rule 2** the `stacking rule`. **Rule 3** is called the nesting rule. Repeatedly applying **Rule 3** to the simplest flowchart results in a flowchart with neatly nested control statements. **Rule 4** generates larger, more involved, and more deeply nested structures.

Structured programming promotes simplicity. Bohm and Jacopini showed that only three forms of control are needed:

1. Sequence
2. Selection
3. Iteration

`Sequence` is straightforward. 

`Selection` is implemented in one of three ways:

* if statement (single selection)
* if…else statement (double selection)
* switch statement (multiple selection)

`Iteration` is implemented in one of three ways:
* while statement
* do…while statement
* for statement

Combining these results illustrates that any form of control ever needed in a C program can be expressed in terms of only three forms of control:
* sequence
* if statement (selection)
* while statement (iteration)

And these control statements can be combined in only `two ways—stacking` and `nesting`.  Indeed, structured programming promotes simplicity.
c
