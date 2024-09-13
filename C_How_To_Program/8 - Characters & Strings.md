# Characters and Strings

This chapter introduces the C standard library functions that help you process characters, strings, lines of text and blocks of memory.  The text manipulations performed by formatted input/output functions like printf and scanf can be implemented using the functions this chapter presents.

## Fundamentals of Strings and Characters

A program may contain `character constants`—each is an int value represented as a character in single quotes. A character constant’s value is that character’s integer value in the machine’s `character set`. A `string` is a series of characters treated as a single unit. A string may include letters, digits and various `special characters` such as +, -, *, / and $. `String literals`, or `string constants`, are written in double quotation marks.

**Properties of Strings**

* **Strings Are Null Terminated** - Every string must end with the `null character ('\0')`. Printing a “string” that does not contain a terminating null character is a logic error. The results of this are undefined. On some systems, printing will continue past the end of the “string” until a null character is encountered. On others, your program will terminate prematurely (i.e.,“crash”) and indicate a “segmentation fault” or “access violation” error.

* **Strings and Pointers** - You access a string via a pointer to its first character. A string’s “value” is the address of its first character. Thus, in C, it’s appropriate to say that a string is a pointer to the string’s first character. This is just like arrays, because strings are simply arrays of characters.

* **char Arrays and char *Pointers** - You can initialize a character array or a char * variable with a string.

```c
// initialize color and colorPtr to the string "blue"
char color[] = "blue";
const char *colorPtr = "blue";
```

The first definition above creates a 5-element array color containing the modifiable characters 'b', 'l', 'u', 'e' and '\0'.  The second definition creates the pointer variable colorPtr that points to the letter 'b' in "blue", which is not modifiable.

The color array definition also can be written as:

```c
char color[] = {'b', 'l', 'u', 'e', '\0'};
```

The preceding definition automatically determines the array’s size based on its number of initializers (5). When storing a string in a char array, the array must be large enough to store the string and its terminating null character. Not allocating sufficient space in a character array to store the null character that terminates a string is an error. C allows you to store strings of any length. If a string is longer than the char array in which you store it, characters beyond the array’s end may overwrite other data in memory.

* **String Literals Should Not Be Modified** - The C standard indicates that a string literal is immutable—that is, not modifiable. If you might need to modify a string, it must be stored in a character array.


**Reading a String with scanf**

Function scanf can read a string and store it in a char array. Assume we have a char array word containing 20 elements. You can read a string into the array with:

```c
scanf("%19s", word);
```

Since word is an array, the array name is a pointer to the array’s first element. So, the & that we typically use with scanf’s arguments is not required.  scanf reads characters until it encounters a space, tab, newline or end-of-file indicator. The field width 19 in the preceding statement ensures that scanf reads a maximum of 19 characters, saving the last array element for the string’s terminating null character. This prevents scanf from writing characters into memory beyond the array’s last element.  Without the field width 19 in the conversion specification %19s, the user input could exceed 19 characters and overwrite other data in memory. If so, your program might crash, or overwrite other data in memory. So, always use a field width when reading strings with scanf. (For reading input lines of arbitrary length, there’s a non- standard—yet widely supported—function readline, usually included in stdio.h.)

## Character-Handling Library

The character-handling library (`<ctype.h>`) contains functions that test and manipulate character data. Each function receives an unsigned char (represented as an int) or EOF as an argument.  Characters are often manipulated as integers because a character in C is a one-byte integer. EOF’s value is typically –1.

* `isblank` - Returns a true value if c is a blank character that separates words in a line of text; otherwise, it returns 0 (false).

```c
int isblank(int c);
```

* `isdigit` - Determines whether its argument is a digit (0–9).

```c
int isdigit(int c);
```

* `isalpha` - Determines whether its argument is an uppercase (A–Z) or lowercase letter (a–z).

```c
int isalpha(int c);
```

* `isalnum` - Determines whether its argument is an uppercase letter, a lowercase
letter or a digit.

```c
int isalnum(int c);
```

* `isxdigit` - Determines whether its argument is a hexadecimal digit (A–F, a–f, 0–9).

```c
int isxdigit(int c);
```

* `islower` - Determines whether its argument is a lowercase letter (a–z).

```c
int islower(int c);
```

* `isupper` - Determines whether its argument is an uppercase letter (A–Z).

```c
int isupper(int c);
```

* `tolower` - Converts an uppercase letter to a lowercase letter and returns the lowercase letter. If the argument is not an uppercase letter, tolower returns the argument unchanged.

```c
int tolower(int c);
```

* `toupper` - Converts a lowercase letter to an uppercase letter and returns the
uppercase letter. If the argument is not a lowercase letter, toupper returns the argument unchanged.

```c
int toupper(int c);
```

* `isspace` - Determines whether a character is one of the following whitespace
characters: space (' '), form feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab ('\t') or vertical tab ('\v').

```c
int isspace(int c);
```

* `iscntrl` - Determines whether a character is one of the following `control characters`: horizontal tab ('\t'), vertical tab ('\v'), form feed ('\f'), alert ('\a'), backspace ('\b'), carriage return ('\r') or new-line ('\n').

```c
int iscntrl(int c);
```

* `ispunct` - Determines whether a character is a printing character other than a space, a digit or a letter, such as $, #, (, ), [, ], {, }, ;, : or %.

```c
int ispunct(int c);
```

* `isprint` - Determines whether a character can be displayed on the screen (including the space character).

```c
int isprint(int c);
```

* `isgraph` - The same as isprint, except that the space character is not included.

```c
int isgraph(int c);
```

## String-Conversion Functions

The string-conversion functions from the general utilities library (`<stdlib.h>`) convert strings of digits to integer and floating-point values.  The C standard also includes strtoll and strtoull for converting strings to long long int and unsigned long long int.

* `strtod` - converts a sequence of characters representing a floating-point value to double. The function returns 0 if it’s unable to convert part of its first argument to double. The function receives two arguments—a string (char *) and a pointer to a string (char **). The string argument contains the character sequence to be converted to double. Whitespace characters at the beginning of the string are ignored. The function uses the char ** argument to aim a char * in the caller (stringPtr) at the first character after the converted portion of the string. If nothing can be converted, the function aims the pointer at the beginning of the string.

```c
double strtod(const char *nPtr,
```

* `strtol` - converts to long int a sequence of characters representing an integer. The function returns 0 if it’s unable to convert any portion of its first argument to long int. The function’s three arguments are a string (char *), a pointer to a string and an integer. This function works identically to strtod, but the third argument specifies the base of the value being converted.

```c
long strtol(const char *nPtr, char **endPtr, int base);
```

* `strtoul` - Converts to unsigned long int a sequence of characters representing an unsigned long int value. The function works identically to function strtol.

```c
unsigned long strtoul(const char *nPtr, char **endPtr, int base);
```

## Standard Input/Output Library Functions

*  `getchar` - Returns the next character from the standard input as an integer.

```c
int getchar(void);
```

* `fgets` - Reads characters from the specified stream into the array s until a newline or end-of-file character is encountered, or until n - 1 bytes are read. This chapter uses the stream stdin—the standard input stream—to read characters from the keyboard. A terminating null character is appended to the array. Returns the string that was read into s. If a newline is encountered, it’s included in the stored string.

```c
char *fgets(char *s, int n, FILE *stream);
```

* `putchar` - Prints the character stored in c and returns it as an integer.

```c
int putchar(int c);
```

* `puts` - Prints the string s followed by a newline character. Returns a nonzero integer if successful, or EOF if an error occurs.

```c
int puts(const char *s);
```

* `sprintf` - Equivalent to printf, but the output is stored in the array s instead of printed on the screen. Returns the number of characters written to s, or EOF if an error occurs.

```c
int sprintf(char *s, const char *format, ...);
```

* `sscanf` - Equivalent to scanf, but the input is read from the array s rather than from the keyboard. Returns the number of items successfully read by the function, or EOF if an error occurs. `sscanf` works like scanf but reads formatted data from a string.

```c
int sscanf(char *s, const char *format, ...);
```

## String-Manipulation Functions of the StringHandling Library

The string-handling library (`<string.h>`) provides useful functions for:

* Manipulating string data (copying strings and concatenating strings),
* Comparing strings,
* Searching strings for characters and other strings,
* Tokenizing strings (separating strings into logical pieces), and
* Determining the length of strings.

* `strcpy` - Copies the string in the second argument into the char array in its first argument. You must ensure that the array is large enough to store the string and its terminating null character, which is also copied.

```c
char *strcpy(char *s1, const char *s2);
```

* `strncpy` - Equivalent to strcpy but copies only the specified number of characters. Function strncpy will not copy the terminating null character of its second argument unless the number of characters to be copied is more than the string’s length.  Specify a size_t parameter.

```c
char *strncpy(char *s1, const char *s2, size_t n);
```

* `strcat` - Appends its second argument string to the string in its char array first argument, replacing the first argument’s null ('\0') character. You must ensure that the array used to store the first string is large enough to store the first string, the second string and the terminating null character copied from the second string.

```c
char *strcat(char *s1, const char *s2);
```

* `strncat` - Appends a specified number of characters from the second string to the first string and adds a terminating '\0'.

```c
char *strncat(char *s1, const char *s2, size_t n);
```

## Comparison Functions of the String-Handling Library

* `strcmp` - Compares the string s1 with the string s2. The function returns 0, less than 0 or greater than 0 if s1 is equal to, less than or greater than s2, respectively.

```c
int strcmp(const char *s1, const char *s2);
```

* `strncmp` - Compares up to n characters of the string s1 with the string s2.
The function returns 0, less than 0 or greater than 0 if s1 is equal to, less than or greater than s2, respectively.

```c
int strncmp(const char *s1, const char *s2, size_t n);
```

## Search Functions of the String-Handling Library

* `strchr` - Searches for the first occurrence of a character in a string. If the character is found, `strchr` returns a pointer to the character in the string; otherwise, `strchr` returns `NULL`.

```c
char *strchr(const char *s, int c);
```

* `stcspn` - Determines the length of the initial part of its first string argument that does not contain any characters from its second string argument.

```c
size_t strcspn(const char *s1, const char *s2);
```

* `strpbrk` - searches its first string argument for the first occurrence of any character in its second string argument. If a character from the second argument is found, `strpbrk` returns a pointer to the character in the first argument; otherwise, it returns NULL.

```c
char *strpbrk(const char *s1, const char *s2);
```

* `strrchr` - searches for the last occurrence of the specified character in a string. If the character is found, strrchr returns a pointer to the character in
the string; otherwise, it returns NULL.

```c
char *strrchr(const char *s, int c);
```

* `strspn` - determines the length of the initial part of its first argument containing only characters from the string in its second argument. The function returns the length of the segment.

```c
size_t strspn(const char *s1, const char *s2);
```

* `strstr` - Searches for the first occurrence of its second string argument in its first string argument. If the second string is found in the first, strstr returns a pointer to the second string’s location in the first.

```c
char *strstr(const char *s1, const char *s2);
```

* `strtok` - breaks a string into a series of tokens—also called tokenizing the string. A token is a sequence of characters separated by delimiters, such as spaces or punctuation marks. A delimiter can be any character. For example, in a line of text, each word is a token, and the spaces and punctuation separating the words are delimiters. You can change the delimiter string in each strtok call.

```c
char *strtok(char *s1, const char *s2);
```


## Memory Functions of the String-Handling Library

The string-handling library functions in this section manipulate, compare and search blocks of memory. These functions treat memory as character arrays and can manipulate any block of data.  The pointer parameters are declared void *, so they can be used to manipulate memory for any data type.  Any pointer can be assigned directly to a void * pointer, and a void * pointer can be assigned directly to a pointer of any other type. Because a void * pointer cannot be dereferenced, each function receives a size argument that specifies the number of bytes the function will process.

* `memcpy` - copies a specified number of bytes from the object pointed to by its
second argument into the one pointed to by its first argument. The function can receive a pointer to any type of object. Its result is undefined if the two objects overlap in mem-ory—that is, they’re parts of the same object. In such cases, use memmove instead.  Function memcpy is more efficient than strcpy when you know the size of the string you’re copying.

```c
void *memcpy(void *s1, const void *s2, size_t n);
```

* `memove` - copies a specified number of bytes from the object pointed to by its second argument into the object pointed to by its first argument. Copying is performed as if the bytes were copied from the second argument into a temporary array, then copied from the temporary array into the first argument. This allows bytes from one part of a string (or block of memory) to be copied into another part of the same string (or block of memory), even if the two portions overlap. Other than memmove, string-manipulation functions that copy characters have undefined results when copying between parts of the same string.

```c
void *memmove(void *s1, const void *s2, size_t n);
```

* `memcmp` - Compares the specified number of bytes of its first argument with its second argument’s corresponding bytes. The function returns a value greater than 0 if the first argument is greater than the second, 0 if the arguments are equal or a value less than 0 if the first argument is less than the second.

```c
int memcmp(const void *s1, const void *s2, size_t n);
```

* `memchr` - Searches for the first occurrence of a byte, represented as unsigned
char, in the specified number of bytes of an object. If the byte is found, memchr
returns a pointer to the byte in the object; otherwise, it returns NULL.

```c
void *memchr(const void *s, int c, size_t n);
```

* `memset` - Copies the value of the byte in its second argument into the first n
bytes of the object pointed to by its first argument, where n is specified by the third argument. You can use memset to set an array’s elements to 0 rather than assigning 0 to each element.

```c
void *memset(void *s, int c, size_t n);
```

## Other Functions of the String-Handling Library

* `strerror` - Takes an error number and creates an error message string. A
pointer to the string is returned.

```c
char *strerror(int errornum);
```

* `strlen` - Takes a string as an argument and returns the number of characters in the string—the terminating null character is not included in the length.

```c
size_t strlen(const char *s);
```


























