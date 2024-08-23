# Introduction

Introduction to Programming in C

## The C Programming Language

C evolved from two previous languages, BCPL and B. BCPL was developed in 1967 by Martin Richards as a language for writing operating systems and compilers. Ken Thompson modeled many features in his B language after their counterparts in BCPL, and in 1970 he used B to create early versions of the UNIX operating system at Bell Laboratories. The C language was evolved from B by Dennis Ritchie at Bell Laboratories and was originally implemented in 1972. C initially became widely known as the development language of the UNIX operating system. C is widely used to develop systems that demand performance, such as operating systems, embedded systems, real-time systems and communications systems 

According to the authors, C is a high level programming language.

## C Standard Library

C programs consist of pieces called functions. You can program all the functions that you need to form a C program, but most C programmers take advantage of the rich collection of existing functions called the C Standard Library. Thus, there are really two parts to learning how to program in C—learning the C language itself and learning how to use the functions in the C Standard Library.

## The C Program-Development Environment

C systems generally consist of several parts: a program-development environment, the language
and the C Standard Library. C programs typically go through six phases to be executed.

* Phase 1 - Editor
* Phase 2 - Preprocesor
* Phase 3 - Compiler
* Phase 4 - Linker
* Phase 5 - Loader
* Phase 6 - CPU

1. Phase 1: Creating a Program
Consists of editing a file with an `editor` like vi, Vim or Neovim. C program filenames should end with the .c extension.

2. Phase 2: Preprocessor
A `preprocessor` program executes automatically before the compiler’s translation phase begins. The C preprocessor obeys special commands called `preprocessor directives`, which indicate that certain manipulations are to be performed on the program before compilation. These manipulations usually consist of including other files in the file to be compiled and performing various text replacements.

3. Phase 3: Compiler
The `compiler` translates the C program into machine-language code. A syntax error occurs when the compiler cannot recognize a statement because it violates the rules of the language. The compiler issues an error message to help you locate and fix the incorrect statement. Syntax errors are also called `compile errors`, or `compile-time errors`.

4. Phase 4: Linking
C programs typically contain references to functions defined elsewhere, such as in the standard libraries or in the private libraries of groups of programmers working on a particular project. The object code produced by the C compiler typically contains “holes” due to these missing parts. A `linker` links the object code with
the code for the missing functions to produce an executable image (with no missing pieces). On Linux you use the `gcc` (Gnu Compiler) to link and compile a program.

Ex:

```bash
#!/bin/bash
gcc program.c
```

If the program compiles and links correctly, a file called a.out (by default) is produced. This is the executable image of our welcome.c program.

5. Phase 5: Loading
Before a program can be executed, the program must first be placed in memory. This is done by the `loader`, which takes the executable image from disk and transfers it to memory. Additional components from shared libraries that support the program are also loaded.

6. Phase 6: Execution
Finally, the computer, under the control of its CPU, executes the program one instruction
at a time.

Ex:

```bash
./a.out
```

Errors such as division-by-zero occur as a program runs, so they are called `runtime errors`
or `execution-time errors`. Divide-by-zero is generally a fatal error, i.e., one that causes the
program to terminate immediately without successfully performing its job. Nonfatal errors
allow programs to run to completion, often producing incorrect results.

## Streams

* `stdin` (standard input stream) - C functions take their input from normally the keyboard, but `stdin` can be redirected
to another stream.
* `stdout` (standard output stream) - Normally the computer screen, but `stdout` can be redirected to another stream.
* `stderrr` (standard error stream) -  Used for displaying error messages.

## General Terminology

* `Refactoring` - involves reworking programs to make them clearer and easier to maintain while preserving their correctness and functionality.

* `Design patterns` - proven architectures for constructing flexible and maintainable object-oriented software. The field of design patterns tries to enumerate those recurring patterns, encouraging software designers to reuse them to develop better-quality software using less time, money and effort.

*`SDK` (Software Development Kit) - Include the tools and documentation developers use to program applications.

* `Beta` - Beta versions are released to a larger number of developers later in the development process after most major bugs have been fixed and new features are nearly complete. Beta software is more stable, but still subject to change.

* `Release candidates` - are generally feature complete, (mostly) bug free and ready for use by the community, which provides a diverse testing environment the software is used on different systems, with varying constraints and for a variety of purposes.

* `Final Release` - Any bugs that appear in the release candidate are corrected, and eventually the final product is released to the general public. Software companies often distribute incremental updates over the Internet.

* `Continuous beta` - Software that’s developed using this approach (for example, Google search or Gmail) generally does not have version numbers. It’s hosted in the cloud (not installed on your computer) and is constantly evolving so that users always have the latest version.

Reference:
C How to program 8th Edition
P.Deitel - H.Deitel
