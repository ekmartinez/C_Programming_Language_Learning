# GNU Debugger Notes

This section contains some commands and explanations on how to use the GNU Debugger to debug C binaries.

## Basics

* **run** (r) - Executes the program from start to end.
* **break** (b) - Sets a breakpoint on a particular line.
* **disable** - Disables a breakpoint.
* **enable** - Enables a disabled breakpoint.
* **next** (n) - Executes the next line of code without diving into functions.
* **step** - Goes to the next instruction, diving into the function.
* **list** (l) - Displays the code.
* **print** (p) - Displays the value of a variable.
* **quit** (q) - Exits out of GDB.
* **clear** - Clears all breakpoints.
* **set** - Sets the value of a variable or memory. Example: `set variable_name = value`,  `set *(pointer) = value`
* **help** - Displays help for any command. `help <command>`
* **info** - Useful for getting information about the program, breakpoints, registers, etc. Example: `info locals` - Shows local variables in the current function. `info registers` - Displays the contents of CPU registers.
* **disas** - Disassemble code at the current location (or at a specific address or function).  Example: `disas main`
