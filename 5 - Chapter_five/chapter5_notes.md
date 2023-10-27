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

Functions allow you to modularize a program. All variables defined in function definitions are `local variables` they can be accessed only in the function in which they’re defined. Most functions have a list of `parameters` that provide the means for communicating information between functions via arguments in function calls. A function’s parameters are also local variables of that function.

There are several motivations for “functionalizing” a program. The `divide-and-conquer` approach makes program development more manageable. Another motivation is `software reusability`—using existing functions as building blocks to create new programs. A third motivation is to avoid repeating code in a program. Packaging code as a function allows it to be executed from other locations in a program simply by calling the function.

Each function should be limited to performing a single, well-defined task, and the function name should express that task. This facilitates abstraction and promotes software reusability. If you cannot choose a concise name that expresses what the function does, it’s possible that your function is attempting to perform too many diverse tasks. It’s usually best to break such a function into smaller functions—this is sometimes called decomposition.

Example: 

```c
// Creating and using a programmer-defined function.

#include <stdio.h>

int square(int y); // function prototype

int main(void)
{
	// loop 10 times and calculate and output square of x each time
	for (int x = 1; x <= 10; ++x) {
		printf("%d ", square(x)); // function call
	}

	puts("");
}

// square function definition returns the square of its parameter
int square(int y) // y is a copy of the argument to the function
{
	return y * y; // returns the square of y as an int
}
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
