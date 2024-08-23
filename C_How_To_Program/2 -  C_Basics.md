# Introduction to C Programming

The C language facilitates a structured and disciplined approach to computer-program
design.

Lets begin our discussion with a basic example:

```c

// A first program in C.
#include <stdio.h>

int main( void )
{
	printf("Welcome to C!\n");
}

Output:
Welcome to C!
```

This simple program illustrates several important features of the C language.

* Comments - The first line of our program contains a `comment`, C uses two forwad slashes to represent line comments (//). If you want to perform a block `comment` instead use /*...*/ .You insert comments to document programs and improve program readability.  As a good programming practice, the authors recommend adding a comment to the line containing the right brace, }, that closes every function, including main.

* Preprocessor Directive -  (#include)  As you may recall on the previous chapter, `the preprocessor directive` is a command executed before compilation. It tells the preprocessor to include the contents of the standard input/output header (<stdio.h>) in the program. This header contains information used by the compiler when compiling calls to standard input/output library functions such as printf.

* The main Function  - The `int main( void )` is a part of every C program. The parentheses after `main` indicate that `main` is a program building block called a function. C programs contain one or more functions, one of which must be `main`. Every program in C begins executing at the function `main`.

Functions can return information. The keyword `int` to the left of main indicates that main “returns” an
integer (whole-number) value.

* Void - It means that the functions takes no arguments.

* Curly Braces - This pair of braces and the portion of the program between the braces is called a block. The block is an important program unit in C.

* An Output Statement - `printf( "Welcome to C!\n")` instructs the computer to perform an action, namely to print on the screen the string of characters marked by the quotation marks.  The entire line, including the printf function (the “f” stands for “formatted”), its argument within the parentheses and the semicolon (;), is called a statement. Every statement must end with a semicolon (also known as the statement terminator).

* Escape Sequence - The characters \n were not printed on the screen. The backslash (\) as used
here is called an escape character.

Some common escape sequences"

* \n - Newline. Position the cursor at the beginning of the next line.
* \t - Horizontal tab. Move the cursor to the next tab stop.
* \a - Alert. Produces a sound or visible alert without changing the current cursor position.
* \\ - Backslash. Insert a backslash character in a string.
* \" - Double quote. Insert a double-quote character in a string.

* The Linker and Executables - Standard library functions like printf and scanf are not part of the C programming language. When the compiler compiles a printf statement, it merely provides space in the object program for a “call” to the library function. But the compiler does not know where the library functions are—the linker does. When the linker runs, it locates the library functions and inserts the proper calls to these library functions in the object program. Now the object program is complete and ready to be executed. For this reason, the linked program is called an executable. If the function name is misspelled, the linker will spot the error, because it will not be able to match the name in the C program with the name of any known function in the libraries.

## Variables

`Variables` are locations in memory where values can be stored for use by a program. All variables must be defined with a name and a data type before they can be used in a program.  A variable name in C can be any valid identifier. An identifier is a series of characters consisting of letters, digits and underscores (_) that does not begin with a digit. C is case sensitive—uppercase and lowercase letters are different in C, so a1 and A1 are different identifiers.  As a good programming practice, the authors recommend starting variables with lower case letter. (Capitlizing used for other things).

Multiple-word variable names can help make a program more readable. Separate the words with underscores as in total_commissions, or, if you run the words together, begin each word after the first with a capital letter as in totalCommissions. The authors preffer using camelCase, however, in the case of C programming, the convention is typically to use underscores to separate words in variable names. This style is often referred to as snake_case. Using underscores makes variable names more readable, especially when the names consist of multiple words. It enhances the clarity of the code and is the prevalent convention in the C community.

## Standard Input/Output (stdio)

* printf(""); - The f stands for "formatted", is the output used to print to the screen.  When gathering data from the user it is called the prompt.

* scanf("%d", &variable1); - The f stands for "formatted", it is used to obtain a value from the user. The function reads from the standard input, which is usually the keyboard.  

This `scanf` has two arguments, "%d" and &integer1. The first, the format control
string, indicates the type of data that should be entered by the user. The %d conversion
specifier indicates that the data should be an integer (the letter d stands for “decimal
integer”). The % in this context is treated by scanf (and printf as we’ll see) as a special
character that begins a conversion specifier.

The second argument of `scanf` begins with an ampersand (&)—called the address operator—followed by the variable name. The &, when combined with the variable name, tells scanf the location (or address) in memory at which the variable integer1 is stored. The computer then stores the value that the user enters for integer1 at that location.

## Memory Concepts

Variable names such as integer1, integer2 and sum actually correspond to locations in
the computer’s memory. Every variable has a name, a type and a value.  Whenever a value is placed in a memory location, the value replaces the previous value in that location and the previous value is lost; thus, this process is said to be `destructive`. On the other hand, when a value is read from a memory location, the process is said to be `nondestructive`.

## Arithmetic in C

Most C programs perform calculations using the C arithmetic operators.

* Addition  (+)
* Subtraction (-)
* Multiplication (*)
* Division (/)
* Remainder (%)
* There is no exponotial operator (use `pow` from library)

`Integer` division yields an integer result.  C provides the `remainder operator`, %, which
yields the remainder after integer division. The remainder operator is an integer operator
that can be used only with integer operands.

### Rules of Operator Precedence

C applies the operators in arithmetic expressions in a precise sequence, which is generally the same as those in algebra:

1. Operators in expressions contained within pairs of parentheses are evaluated first.

2. Multiplication, division and remainder operations are applied next. If an expression
contains several multiplication, division and remainder operations, evaluation
proceeds from left to right. Multiplication, division and remainder are said
to be on the same level of precedence.

3. Addition and subtraction operations are evaluated next. If an expression contains
several addition and subtraction operations, evaluation proceeds from left to right.
Addition and subtraction also have the same level of precedence.

4. The assignment operator (=) is evaluated last.

Example:

```c
#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 3;
    int c = 7;
    int x = 5;

    int tryCalc = a * x * x + b * x + c;

    printf("%d", &tryCalc); 
}

Output:

72
```

## Decision Making: Equality and Relational Operators

Conditions in if statements are formed by using the `equality operators` and `relational
operators. The `relational operators` all have the same level of precedence and they associate left to right. The `equality operators` have a lower level of precedence than the relational operators and they also associate left to right.

### Relational Operators

* > - Greater than
* < - Less than
* >= - Greater or equal than
* <= - Lesser or equal than

### Equality Operators

* == - Equal to
* != - Not equal to

Example:

```c
#include <stdio.h>

int main(void)
{
    printf("Enter two integers, and I will tell you\n");
    printf("the relationships the satisfy: ");

    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    } // end if

     if (num1 != num2) {
        printf("%d is not equal to %d\n", num1, num2);
    } // end if

     if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } // end if

     if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } // end if

     if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);
    } // end if

     if (num1 >= num2) {
        printf("%d is greater than or equal %d\n", num1, num2);
    } // end if

} // end function main

Output:

Enter two integers, and I will tell you
the relationships the satisfy: 3 7
3 is not equal to 7
3 is less than 7
3 is less than or equal to 7

```

## Security Advice

Avoid using printf with a single string argument. If you need to display a string that terminates with a newline, use the `puts` function, which displays its string argument followed by a newline character.

For example:
```c
printf("Welcome to C!\n");
```
Should be written as:

```c
puts("Welcome to C!");
```

The \n is not included because puts adds it automatically.

 The use of printf() is only dangerous if not used carefully, especially when dealing with user input. The main concern is related to format string vulnerabilities, which can lead to security vulnerabilities such as information leaks and arbitrary code execution.
 
 ### Format String Vulnerabilities

 In printf(), the format string is used to specify the layout of the output. When user input is directly incorporated into the format string, without proper validation or sanitization, an attacker can exploit this vulnerability. 
 
 For example:

 ```c
char user_input[100];
scanf("%s", user_input);
printf(user_input); // Potential vulnerability if user_input contains format specifiers
 ```
If the user_input contains format specifiers (%s, %d, etc.) and an attacker provides a carefully crafted input, they might be able to read or write arbitrary memory locations, leading to information leaks or even arbitrary code execution.

To mitigate these issues, you should avoid using user input directly in the format string of printf(). Instead, you can use specific format specifiers and provide the corresponding arguments separately:

```c
char user_input[100];
scanf("%s", user_input);
printf("User input: %s\n", user_input); // Safe usage with format specifier
```

Regarding puts(), it does not have the same format string vulnerability because it only prints strings and appends a newline character. There are no format specifiers involved, so there is no risk of format string vulnerabilities with puts().

In summary, when using printf(), always validate and sanitize user input, and avoid using user input directly in the format string to prevent format string vulnerabilities and related security concerns. puts() does not pose the same security risk as printf() in this context.


Reference:
C How to program 8th Edition
P.Deitel - H.Deitel
