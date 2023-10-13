# Structured Program Development in C

## Introduction

Here we discuss techniques that facilitate the development of structured computer programs.

## Algorithms

`Algorithm` - A procedure for solving a problem in terms of:

1. the actions to be executed, and
2. the order in which these actions are to be executed 

`Program Control` - Specifying the order in which statements are to be executed in a computer program.

`Pseudocode` - An artificial and informal language that helps you develop algorithms. Pseudocode is similar to everyday English; it’s convenient and user friendly although it’s not an actual computer programming language. Pseudocode consists only of action and decision statements—those that are executed when the program has been converted from pseudocode to C and is run in C. Definitions are not executable statements—they’re simply messages to the compiler.

## Control Structures

`Sequential execution` - When the program is executed one after the other in the order in which they’re written.

`Transfer of Control` - Enables the programmer to specify that the next statement to be executed may be other than the
next one in sequence.

`goto statement` - Widely used during the 1960s, the indiscriminate use of transfer of control made it very dificult.  The goto statement allowed the programmer to specify a transfer of control to one of many possible desitnations in a program.  The notion of so-called structured programming became almost synonymous with “goto elimination.”

Bohm and Jacopini’s work demonstrated that all programs could be written in terms of only three control structures: 

* The sequence structure 
* The selection structure 
* The iteration structure

### Sequence structure 

Unless directed otherwise, the computer executes C statements one after the other in the order in which they’re written.

`Flowcharts` - Graphical representation of an algorithm or of a portion of an algorithm. Flowcharts are drawn using certain special-purpose symbols such as:

* `Rectangles` - Also called the action symbol, indicate any type of action including a calculation or an input/output operation.

* `Diamond` -  The most important flowcharting symbol is the `diamond symbol`, also called the `decision symbol`, which indicates that a decision is to be made.

* `Rounded rectaingles` - First symbol we use when representing a complete algorithm, containing the word "begin".  The last symbol is a rounded rectangle containing the word “End.”

* `small circles` - When drawing only a portion of an algorithm we omit the rounded rectangle symbols in favor of using small circle symbols, also called `connector symbols`.

All of these symbols are connected by arrows called `flowlines`.

### Selection Statements

C provides three types of selection structures in the form of statements:

1. The if selection statement - Either selects (performs) an action if a condition is true or skips the
action if the condition is false. The if statement is called a `single-selection statement` because it selects or ignores a single action.

if Example, convert pseudocode to C code:

_If student's grade is greater than or equal to 60_
    _Print "Passed"_

```c
if (grade >= 60) {
    puts("Passed");
} // end if
```

2. The if...else selection statement - Performs an action if a condition is true and performs a different action if the condition is false. The if…else statement is called a `double-selection statement` because it selects between two different actions.

if...else example, convert pseudocode to C code:

_if student's grade is greaer than or equal to 60_
    _Print "Passed"_
_else_
    _Print "Failded"_

```c
if(grade >= 60) {
    puts("Passed");
} // end if
else {
    puts("Failed");
} // end else
```

### Conditional Operators
C provides the `conditional operator (?:)`, which is closely related to the if…else statement. The conditional operator is `C’s only ternary operator`—it takes three operands. These together with the conditional operator form a `conditional expression`. 

Operands:

1. Cndition
2. Value if true
3. Value if false

Ex:

```c
puts(grade >= 60 ? "Passed" : "Failed");
```

### The else if Statement

`else if` statements test for multiple cases by placing if…else statements inside if…else statements.  We can better understand this by creating an example.  Lets say we have the following pseudocode:

_If student's gade is greater than or equal to 90_
    _Print "A"_
_else_
    _If student's grade is greater than or equal to 80_
        _Print "B"_
    _else_
        _If student's grade is greater than or equal to 70_
            _Print "C"_
        _else_
            _If student's grade is greater than or equal to 60_
                _Print "D"_
            _else_
                _Print "F"_

Technically we could write a bunch of nested if...else statements until we reach the bottom of the pseudocode, but a more efficient and preferable way would be to use else if statements.  Here is how:

```c
if (grade >= 90) {
    puts("A");
} // end if
else if (grade >= 80) {
    puts("B");
} // end else if
else if (grade >= 70) {
    puts("C");
} // end else if
else if (grade >= 60) {
    puts("D");
} // end else if
else{
    puts("F");
} // else
```

3. The switch statment - Performs one of many different actions, depending on the value of an expression. The switch statement is called a `multiple-selection statement` because it selects among many different actions.  The switch statement is covered on chapter 4.

### Iteration Statements

An `iteration statement` (also called an repetition statement or loop) allows you to specify that an action is to be repeated while some condition remains true.

C provides three types of iteration structures in the form of statements:

1. while
2. do...while
3. for

1. `while` - The `while statement` will create a loop that will run a long as a condition is true.

Example:

```c
product = 3;
while (product <= 100>) {
    product = 3 * product;
}
```
The above loop is designed to find the first power of 3 larger than 100. The integer variable product has been initialized to 3. When the following code finishes executing, product will contain the desired answer.

A `Counter-controlled iteration` is a technique that uses a variable called a `counter` to specify the number of times a set
of statements should execute. Counter-controlled iteration is often called `definite` iteration because the number of iterations is known before the loop begins executing. 

A total is a variable used to accumulate the sum of a series of values. A counter is a variable used to count. 

Variables used to store totals should be initialized to zero before being used in a program; otherwise the sum would include the previous value stored in the total’s memory location. Counter variables are normally initialized to zero or one, depending on their use (we’ll present examples of each). An uninitialized variable contains a `garbage value`—the value last stored in the memory location reserved for that variable.

A `sentinel value` (also called a `signal value`, a `dummy value`, or a `flag value`)  is used to indicate “end of data entry.”

`top-down`, `stepwise refinement` -  A technique that’s essential to the development of well-structured programs.  We begin with a pseudocode representation of the `top`.  The `top` is a single statement that conveys the program’s overall function. As such, the `top` is, in effect, a complete representation of a program. Unfortunately, the `top` rarely conveys a sufficient amount of detail for writing the C program. So we now begin the `refinement process`. We divide the `top` into a series of smaller tasks and list these in the order in which they need to be performed. This results in a first refinement.

`sequence structure` - Describes the steps that are to be executed in order, one after the other.

`second refinement` - In this level of refinement we commit to specific variables.

## Converting Between Types Explicity and Implicity

`type float` - an average is a value such as 7.2 or –93.5 that contains a fractional part. These values are referred to as `floating-point` numbers and can be represented by the data type `float`.

`cast operator` -  To produce a `floating-point` calculation with integer values, we must create temporary values that are `floating-point` numbers. C provides the unary `cast operator` to accomplish this task. 

Example:

```c
average = (float) total / count;
```

The above `cast operator` (float), creates a temporary floating-point copy of its operand, total. The value stored in total is still an integer. Using a cast operator in this manner is called `explicit conversion`.  The calculation now consists of a floating-point value( the temporary float version of total) divided by the unsigned int value stored in counter.   

C evaluates arithmetic expressions only in which the data types of the operands are identical. To ensure that the operands are of the same type, the compiler performs an operation called `implicit conversion` on selected operands. For example, in an expression containing the data types unsigned int and float, copies of unsigned int operands are made and converted to float. C provides a set of rules for conversion of operands of different types. This discuss further in Chapter 5.

`Cast operators` are available for most data types—they’re formed by placing parentheses around a type name. Each cast operator is a `unary operator`, i.e., an operator that takes only one operand.

C also supports unary versions of the plus (+) and minus (-) operators, so you can write expressions such as -7 or +5. `Cast operators` associate from right to left and have the same precedence as other `unary operators` such as unary + and unary -. This precedence is one level higher than that of the multiplicative operators *, / and %.

###  Formatting Floating-Point Numbers

The printf conversion specifier %.2f allows us to format the output of a floating-point number. Lets take a look at an example to see how this works:

```c
printf("%.2f\n", 3.446); // prints 3.45
printf("%.1f\n", 3.446); // prints 3.4
```

It is importante to take into account that `Floating-Point` numbers are not 100% accurate, but they are used widely in scenarios where an approximation is appropriate.  `float` data types should never be used for equality operations.

## Assignment Operators

C provides several assignment operators for abbreviating assignment expressions. For example:

```c
c = c + 3; // This assignment statement.
c += 3; // can be abbreviated with this one.
```

Here is a list of `assignment operators`:

+= 
-=
*=
/=
%=

## Increment and Decrement Operators

C also provides the unary `increment operator`, ++, and the unary `decrement operator`, --.  If increment or decrement operators are placed before a variable (i.e., prefixed), they’re referred to as the `preincrement` or `predecrement operators`, respectively.

Here is are a couple of examples:

++a -  Increment a by 1, then use the new value of a in the expression in which a resides.
a++ - Use the current value of a in the expression in which a resides, then increment a by 1.
--b - Decrement b by 1, then use the new value of b in the expression in which b resides.
b-- - Use the current value of b in the expression in which b resides, then decrement b by 1.

## Secure C Programming

### Arithmetic Overflow

Lets take a look at an example that could lead to an introduction of a vulnerability in the code:

```c
sum integer1 + integer2; // assign total to sum
```

This innocent looking statement has a security problem since adding two values tath are too large stored in a int variable leads to an `Arithmetic Overflow` and can cause undefined behavior, possibly leaving a system open to attack.

The platform-specific maximum and minimum values that can be stored in an int variable are represented by the constants INT_MAX and INT_MIN, respectively, which are defined in the header <limits.h>. There are similar constants for the other integral types that we’ll be introducing in Chapter 4. You can see your platform’s values for these constants by opening the header <limits.h> in a text editor.

### Unsigned Integers 

In general, counters that should store only non-negative values should be declared with unsigned before the integer type. Variables of unsigned types can represent values from 0 to approximately twice the positive range of the corresponding signed integer types. You can determine your platform’s maximum unsigned int value with the constant UINT_MAX from <limits.h>. 

### scan_s and printf_s

The C11 standard introduces more secure versions of printf and scanf called printf_s and scanf_s.
