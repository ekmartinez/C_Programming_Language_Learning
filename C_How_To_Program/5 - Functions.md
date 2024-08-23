# C Functions

Experience has shown that the best way to develop and maintain a large program is to construct it from smaller pieces, each of which is more manageable than the original program. This technique is called `divide and conquer`.

## Modularizing Programs in C

The C language and the standard library are both specified by the C standard, and they’re both provided with standard C systems. Functions are `invoked` by a `function call`, which specifies the function name and provides information (as arguments) that the function needs to perform its designated task. `Programmer-defined functions` are functions to define specific tasks thay may be used at many points in  a program.

## Math Library Functions

Functions are normally used in a program by writing the name of the function followed by a left parenthesis followed by the argument (or a comma-separated list of arguments) of the function followed by a right parenthesis.

Example:

```c
printf("%.2f", sqrt(900.00));
```

When this statement executes, the math library function sqrt is called to calculate the square root of the number contained in the parentheses (900.0). The number 900.0 is the argument of the sqrt function. The preceding statement would print 30.00. The sqrt function takes an argument of type double and returns a result of type double. All functions in the math library that return floating-point values return the data type double. Note that double values, like float values, can be output using the %f conversion specification. Function arguments may be constants, variables, or expressions.

Example:

```c
c1 = 13.0;
d = 3.0;
f = 4.0

printf("%.2f", sqrt(c1 + d * f));
```

The following summarizes a small sample of the C math library functions. The variables x and y are of type double. The C11 standard adds a wide range of floating point and complex-number capabilities.

**sqrt(x)** - square root of x. (*sqrt(900.0) is 30.0*)

**cbrt(x)** - cube root of x (C99 and C11 only) - (*cbrt(27.0*) is 3.0)

**exp(x)** - exponential function e^x. (*exp(1.0) is 2.718282*) (*exp(2.0)* is 7.389056)

**log(x)** - natural logarithm of x (base e) (*log(2.718282*) is 1.0) (*log(7.389056)* is 2.0)

**log10(x)** - logarithm of x (base 10) - (*log10(1.0)* is 0.0) (*log10(10.0)* is 1.0) (*log10(100.0)* is 2.0)

**fabs(x)** - absolute value of x as a floating-point number. (*fabs(-13.5)* is 13.5)

**ceil(x)** - rounds x to the smallest integer not less than x. (*ceil(9.2)* is 10.0)

**floor(x)** - rounds x to the largest integer not greater than x. (*floor(9.2)* is 9.0)

**pow(x, y)** - x raised to power y (x^y ). - (*pow(2, 7)* is 128.0).

**fmod(x, y)** - remainder of x/y as a floating-point number. (*fmod(13.657, 2.333)* is 1.992)

**sin(x)** - trigonometric sine of x (x in radians) - (*sin(0.0)* is 0.0)

**cos(x)** - trigonometric cosine of x (x in radians) - (*cos(0.0)* is 1.0)

**tan(x)** - trigonometric tangent of x (x in radians) - (*tan(0.0)* is 0.0)

## Functions

Functions allow you to modularize a program. 

**Local variables** -Variables defined in function definitions, they can be accessed only in the function in which they’re defined. 

**List of parameters** -  Provide the means for communicating information between functions via arguments in function calls. A function’s parameters are also local variables of that function.

There are several motivations for “functionalizing” a program:

1. The `divide-and-conquer` approach makes program development more manageable. 
2. `Software reusability` - using existing functions as building blocks to create new programs. 
3. Avoiding code repetition, ackaging code as a function allows it to be executed from other locations in a program simply by calling the function.

**Abstraction** - Programs created from staandarized functions that accomplish specific task, rather than being built by using customized code.(Ex. printf, scanf, pow)

Each function should be limited to performing a single, well-defined task, and the function name should express that task. This facilitates abstraction and promotes software reusability. If you cannot choose a concise name that expresses what the function does, it’s possible that your function is attempting to perform too many diverse tasks. It’s usually best to break such a function into smaller functions—this is sometimes called decomposition.
```

**Format of a Function Defition**

The format of a function defition is:

```c
return-value-type function-name(parameter-list)
{
    statements
}
```

The *function-name* is any valid identifier. The `return-value-type` is the data type of the result returned to the caller. The *return-value-type* void indicates that a function does not return a value. Together, the *return-value-type*, *function-name* and *parameter-list* are sometimes referred to as the function `header`. The `parameter-list` is a comma-separated list that specifies the parameters received by the function when it’s called. If a function does not receive any values, parameter-list is void. A type must be listed explicitly for each parameter. The statements within braces form the function body, which is also a block. Variables can be declared in any block, and blocks can be nested (but functions connot be nested).

There are three ways to return control from a called function to the point at which a function was invoked. If the function does not return a result, control is returned simply when the function-ending right brace is reached, or by executing the statement:

```c
    return;
```

If the function does return a result, the statement"

```c
    return *expression*;
```
returns the value of expression to the caller.

Notice that main has an int return type. The return value of main is used to indicate whether the program executed correctly. In earlier versions of C, we’d explicitly place:

```c
    return 0;
```

at the end of main—0 indicates that a program ran successfully. The C standard indicates that main implicitly returns 0 if you to omit the preceding statement—as we’ve done throughout this book. You can explicitly return non-zero values from main to indicate that a problem occured during your program’s execution. For information on how to report a program failure, see the documentation for your particular operating-system environment.

**Function Prototype** - The compiler uses function prototypes to validate function calls. A function call that does not match the function prototype is a compilation error. An error is also generated if the function prototype and the function definition disagree.

Example:

```c

// Function prototype
int my_function(int x, int y, int z);
```

It states that maximum takes three arguments of type int and returns a result of type int.  If for example I wouldefine this function as:

```c
// Function definition
void my_function(int x, int, y, int z);
```

An error would occur because the function prototype and the function definition disagree.

**Argument Coercion and "Usual Arithmetic Conversion Rules"***

**Coercion of arguments** - the forcing of arguments to the appropriate type. For example, the math library function sqrt can be called with an integer argument even though the function prototype in <math.h> specifies a double parameter, and the function will still work correctly. The statement:

```c
printf("%.3f\n", sqrt(4));
```

correctly evaluates sqrt(4) and prints the 2.000. he function prototype causes the compiler to convert a copy of the int value 4 to the double value 4.0 before the copy is passed to sqrt.

In general, argument values that do not correspond precisely to the parameter types in the function prototype are converted to the proper type before the function is called. These conversions can lead to incorrect results if C’s `usual arithmetic conversion rules` are not followed. These specify how values can be converted to other types without losing data. In our sqrt example, an int is automatically converted to a double without changing its value (because double can represent a much larger range of values than int). However, a double converted to an int truncates the double’s fractional part, thus changing the original value. Converting large integer types to small integer types (e.g., long to short) can also result in changed values.


The usual arithmetic conversion rules automatically apply to expressions containing values of two data types (also referred to as `mixed-type expressions`), and are handled by the compiler. In a mixed-type expression, the compiler makes a temporary copy of the value that needs to be converted, then converts the copy to the “highest” type in the expression—this is known as `promotion`. The usual arithmetic conversion rules for a mixed-type expression containing at least one floating-point value are:

* If one of the values is a long double, the other is converted to a long double.
* If one of the values is a double, the other is converted to a double.
* If one of the values is a float, the other is converted to a float.

If the mixed-type expression contains only integer types, then the usual arithmetic conversions specify a set of integer promotion rules.

```c
/*
                                Conversion Specification
Floating-point types            printf          scanf

long double                     %Lf             %Lf
double                          %f              %lf
float                           %f              %f
---------------------------------------------------------

Integer type                    

unsigned long long int          %llu            %llu           
long long int                   %lld            %lld
unsigned long int               %lu             %lu
long int                        %ld             %ld
unsigned int                    %u              %u
int                             %d              %d
unsigned short                  %hu             %hu
short                           %hd             %hd
char                            %c              %c
-------------------------------------------------------
*/
```

A value can be converted to a lower type only by explicitly assigning the value to a variable of lower type or by using a cast operator. Arguments in a function call are converted to the parameter types specified in a function prototype as if the arguments were being assigned directly to variables of those types.

If there’s no function prototype for a function, the compiler forms its own function prototype using the first occurrence of the function—either the function definition or a call to the function. This typically leads to warnings or errors, depending on the compiler.

## Function Call Stack and Stack Frames

**stack** - (a collection of related data items) - Stacks are known as `last-in, first-out (LIFO) data structures` —the last item pushed (inserted) on the stack is the first item popped (removed) from the stack.

**function call stack** - (`program execution stack`) - This data structure—
working “behind the scenes”—supports the function call/return mechanism. It also supports the creation, maintenance and destruction of each called function’s local variables (also called automatic variables).

As each function is called, it may call other functions, which may call other functions—all before any function returns. Each function eventually must return control to the function that called it. So, we must keep track of the return addresses that each function needs to return control to the function that called it. The function call stack is the perfect data structure for handling this information. Each time a function calls another function, an entry is pushed onto the stack.

**stack frame** - contains the return address that the called function needs in order to return to the calling function. If the called function returns, instead of calling another function before returning, the stack frame for the function call is popped, and control transfers to the return address in the popped stack frame.

Each called function always finds the information it needs to return to its caller at the top of the call stack. And, if a function makes a call to another function, a stack frame for the new function call is simply pushed onto the call stack. Thus, the return address required by the newly called function to return to its caller is now located at the top of the stack.

The stack frames have another important responsibility. Most functions have local(automatic) variables—parameters and some or all of their local variables. Automatic variables need to exist while a function is executing. They need to remain active if the function makes calls to other functions. But when a called function returns to its caller, the called function’s automatic variables need to “go away.” The called function’s stack frame is a perfect place to reserve the memory for automatic variables. That stack frame exists only as long as the called function is active. When that function returns—and no longer needs its local automatic variables—its stack frame is popped from the stack, and those local automatic variables are no longer known to the program.

The amount of memory in a computer is finite, so only a certain amount of memory can be used to store stack frames on the function call stack. If more function calls occur than can have their stack frames stored on the function call stack, a fatal error known as stack overflow occurs.

Lets take a look at an example:

```c
// Demostrating the function call stack
// and stack framse using a function square.

#include <stdio.h>

int square(int); // prototype for function square

int main()
{
	int a = 10; // value to square (local automatic varaible in main)
	
	printf("%d squared: %d\n", a, square(a)); // display a squared
}

// returns the square of an integer
int square(int x) // x is a local variable
{
	return x * x; // calculate square and return result
}
```

First the operating system calls main—this pushes a stack frame onto the stack. The stack frame tells main how to return to the operating system (i.e., transfer to return address R1) and contains the space for main’s automatic variable (i.e., a, which is initialized to 10). Function main—before returning to the operating system—now calls function squarThis causes a stack frame for square to be pushed onto the function call stack. This stack frame contains the return address that square needs to return to main (i.e., R2) and the memory for square’s automatic variable (i.e., x).

After square calculates the square of its argument, it needs to return to main—and no longer needs the memory for its automatic variable x. So the stack is popped—giving square the return location in main (i.e., R2) and losing square’s automatic variable. Function main now displays the result of calling square (line 12 in Fig. 5.6). Reaching the closing right brace of main causes its stack frame to be popped from the stack, gives main the address it needs to return to the operating system and causes the memory for main’s automatic variable (i.e., a) to become unavailable.

## Headers

Each standard library has a corresponding header containing the function prototypes for all the functions in that library and definitions of various data types and constants needed by those functions. The following lists alphabetically some of the standard library headers that may be included in programs:

*<assert.h>* - Contains information for adding diagnostics that aid program debugging.

*<ctype.h>* - Contains function prototypes for functions that test characters for certain properties, and function prototypes for functions that can be used to convert lowercase letters to uppercase letters and vice versa.

*<errno.h>* - Defines macros that are useful for reporting error conditions.

*<float.h>* - Contains the floating-point size limits of the system.

*<limits.h>* - Contains the integral size limits of the system.

*<locale.h>* - Contains function prototypes and other information that enables a program to be modified for the current locale on which it’s running. The notion of locale enables the computer system to handle different conventions for expressing data such as dates, times, currency amounts and large numbers throughout the world.

*<math.h>* - Contains function prototypes for math library functions.

*<setjmp.h>* - Contains function prototypes for functions that allow bypassing of the usual function call and return sequence.

*<signal.h>* - Contains function prototypes and macros to handle various conditions that may arise during program execution.

*<stdarg.h>* - Defines macros for dealing with a list of arguments to a function whose number and types are unknown.

*<stddef.h>* - Contains common type definitions used by C for performing calculations.

*<stdio.h>* - Contains function prototypes for the standard input/output library functions, and information used by them.

*<stdlib.h>* - Contains function prototypes for conversions of numbers to text and text to numbers, memory allocation, random numbers and other utility functions.

*<string.h>* - Contains function prototypes for string-processing functions.

*<time.h>* - Contains function prototypes and types for manipulating the time and date.

The C standard includes additional headers and You can create custom headers. Programmer-defined headers should also use the .h filename extension. A programmer-defined header can be included by using the #include preprocessor directive.

```c
#include "square.h"
```

## Passing Arguments by Value and By Reference

* **pass-by-value** - When arguments are passed by value, a copy of the argument’s value is made and passed to the called function. Changes to the copy do not affect an original variable’s value in the caller. Pass-by-value should be used whenever the called function does not need to modify the value of the caller’s original variable. This prevents the accidental side effects (variable modifications) that so greatly hinder the development of correct and reliable software systems.

* * **pass-by-reference** - When an argument is passed by reference, the caller allows the called function to modify the original variable’s value. Pass-by-reference should be used only with trusted called functions that need to modify the original variable.

(More of this on the pointers chapter)

**Enumerations** - An enumeration, introduced by the keyword enum, is a set of integer constants represented by identifiers. Enumeration constants help make programs more readable and easier to maintain. Values in an enum start with 0 and are incremented by 1. The identifiers in an enumeration must be unique, but the values may be duplicated. It is a user-defined data type used to assign names to integral constants, making the code more readable and self-documenting. Enums are particularly useful when you have a set of related constant values that represent distinct states, options, or categories.

Example:

```c
#include <stdio.h>

enum Weekday { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Weekday today = WEDNESDAY;
    printf("Today is day number %d\n", today);
    return 0;
}

Output:

Today is day number 3
```

## Storage Classes

The attributes of variables include name, type, size and value. We also use identifiers as names for user-defined functions. Actually, each identifier in a program has other attributes, including storage class, storage duration, scope and linkage.

C provides the storage class specifiers auto, register, extern and static. An identifier’s storage class determines its storage duration, scope and linkage. (Note: Keyword register is archaic and should not be used.

**storage duration** - is the period during which the identifier exists in memory. Some exist briefly, some are repeatedly created and destroyed, and others exist for the program’s entire execution.

**scope** - is where the identifier can be referenced in a program. Some can be referenced throughout a program, others from only portions of a program.

**linkage** - determines for a multiple-source-file program whether the identifier is known only in the current source file or in any source file with proper declarations.

The storage-class specifiers can be split between `automatic storage duration` and `static storage duration`. Keyword `auto` is used to declare variables of automatic storage duration.

**automatic storage duration** - are created when program control enters the block in which they’re defined; they exist while the block is active, and they’re destroyed when program control exits the block. Only variables can have automatic storage duration. A function’s *local variables* (those declared in the parameter list or function body) normally have automatic storage duration. Keyword auto explicitly declares variables of automatic storage duration. *Local variables* have automatic storage duration by default, so keyword auto is rarely used.

## Scope Rules

The scope of an identifier is the portion of the program in which the identifier can be referenced. For example, when we define a local variable in a block, it can be referenced only following its definition in that block or in blocks nested within that block.

The four identifier scopes are:

1. **Function scope**
    * Labels (identifiers followed by a colon such as start:) are the only identifiers with function scope. Labels can be used anywhere in the function in which they appear, but cannot be referenced outside the function body. Labels are used in switch statements (as case labels) and in goto statements. Labels are hidden in the function in which they’re defined. This hiding, more formally called information hiding is a means of implementing the `principle of least privilege`
    * Principle of least privilege - a fundamental principle of good software engineering. In the context of anapplication, the principle states that code should be granted only the amount of privilege and access that it needs to accomplish its designated task, but no more.

2. **File scope**  
    * An identifier declared outside any function has file scope. Such an identifier is “known” (i.e., accessible) in all functions from the point at which the identifier is declared until the end of the file. Global variables, function definitions, and function prototypes placed outside a function all have file scope.

3. **Block scope** 
    * Identifiers defined inside a block have block scope. Block scope ends at the terminating right brace (}) of the block. Local variables defined at the beginning of a function have block scope, as do function parameters, which are considered local variables by the function. Local variables declared static still have block scope, even though they exist from before program startup. Thus, storage duration does not affect the scope of an identifier.

4. **Function-prototype scope** 
    * The only identifiers with function-prototype scope are those used in the parameter list of a function prototype. Function prototypes do not require names in the parameter list—only types are required. If a name is used in the parameter list of a function prototype, the compiler ignores the name. Identifiers used in a function prototype can be reused elsewhere in the program without ambiguity.

## Recursion

A `recursive function` is one that calls itself either directly or indirectly through another function. Recursive problem-solving approaches have a number of elements in common. A recursive function is called to solve a problem. The function actually knows how to solve only the simplest case(s), or so-called `base case(s)`. 

If the function is called with a base case, the function simply returns a result. If the function is called with a more complex problem, the function typically divides the problem into two conceptual pieces: a piece that the function knows how to do and a piece that it does not know how to do. To make recursion feasible, the latter piece must resemble the original problem, but be a slightly simpler or smaller version. Because this new problem looks like the original problem, the function launches (calls) a fresh copy of itself to work on the smaller problem—this is referred to as a `recursive call` or the `recursion step`. The recursion step also includes a return statement, because its result will be combined with the portion of the problem the function knew how to solve to form a result that will be passed back to the original caller.

The recursion step executes while the original call to the function is paused, waiting for the result from the recursion step. The recursion step can result in many more such recursive calls, as the function keeps dividing each problem with which it’s called into two conceptual pieces. For the recursion to terminate, each time the function calls itself with a slightly simpler version of the original problem, this sequence of smaller problems must eventually converge on the base case. When the function recognizes the base case, it returns a result to the previous copy of the function, and a sequence of returns ensues all the way up the line until the original call of the function eventually returns the final result to its caller.

Recursion has many negatives, first recursion is a complex topic. It repeatedly invokes the mechanism, and consequently the overhead, of function calls. This can be expensive in both processor time and memory space. Each recursive call causes another copy of the function (actually only the function’s variables) to be created; this can consume considerable memory. Iteration normally occurs within a function, so the overhead of repeated function calls and extra memory assignment is omitted. So why choose recursion?, that's the question.

## Final Thougths on Functions
Dividing a large program into functions promotes good software engineering. But it has a price. A heavily functionalized program—as compared to a monolithic (i.e., one-piece) program without functions—makes potentially large numbers of function calls, and these consume execution time on a computer’s processor(s). Although monolithic programs may perform better, they’re more difficult to program, test, debug, maintain, and evolve.

Today’s hardware architectures are tuned to make function calls efficient, C compilers help optimize your code and today’s hardware processors are incredibly fast. For the vast majority of applications and software systems you’ll build, concentrating on good software engineering will be more important than programming for high performance. Nevertheless, in many C applications and systems, such as game programming, real-time systems, operating systems and embedded systems, performance is crucial.


