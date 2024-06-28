// Rolling a Six-Sided Die 20 Times
// Shifted, scaled random integers produced by 1 + rand() % 6.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// loop 20 times
	for (unsigned int i = 1; i <= 20; ++i) {
		
		// pick random number from 1 to 6 and output it
		printf("%10d", 1 + (rand() % 6 ));

		// if counter is divisile by 5, begin new line of output.
		if (i % 5 == 0) {
			puts("");
		}
	}
}

/*
 
If this program is runned more than once it will produce the same results, why?
This repeatability is an important characteristic of function rand. When debugging a program, 
this repeatability is essential for proving that corrections to a program work properly.

Function rand actually generates pseudorandom numbers. Calling rand repeatedly
produces a sequence of numbers that appears to be random. However, the sequence repeats
itself each time the program is executed.

Once a program has been thoroughly debugged,
it can be conditioned to produce a different sequence of random numbers for each execu-
tion. This is called randomizing and is accomplished with the standard library function
srand. Function srand takes an unsigned int argument and seeds function rand to pro-
duce a different sequence of random numbers for each execution of the program.

illustration exercise 5 randomizes this program.
 */
