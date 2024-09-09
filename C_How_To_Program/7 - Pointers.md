# Pointers

Pointers enable programs to:

* Accomplish pass-by-reference,
* Pass functions between functions,
* Manipulate strings and arrays, and
* Create and manipulate dynamic data structures that grow and shrink at execution time, such as linked lists, queues, stacks and trees.

Pointers are variables whose values are memory addresses. Usually, a variable directly contains a specific value. A pointer, however, contains the address of another variable that contains a specific value. The pointer points to that variable. In this sense, a variable name directly references a value, and a pointer indirectly references a value. Referencing a value through a pointer is called `indirection`.

Pointers should be initialized when they’re defined, or they can be assigned a value. A pointer may be initialized to `NULL`, `0` or an `address`.

* A pointer with the value NULL points to nothing. NULL is a symbolic constant
with the value 0 and is defined in the header <stddef.h>.

* Initializing a pointer to `0` is equivalent to initializing it to `NULL`. The constant `NULL` is preferred because it emphasizes that you’re initializing a pointer rather than a variable that stores a number. When `0` is assigned, it’s first converted to a pointer of the appropriate type. The value `0` is the only integer value that can be assigned directly to a pointer variable.

## Pointer Operators

* **Address (&) Operator** - The unary address operator (&) returns the address of its operand.

Example:

```c
int y = 5; // definition of y
int *yPtr = &y; // points to y's address in memory
```

* **Indirection (*) Operator** - You apply the unary `indirection operator (*)`, also called the `dereferencing operator`, to a pointer operand to get the value of the object to which the pointer points. The following statement prints 5, which is the value of variable y:

```c
printf("%d", *yPtr);
```

Using * in this manner is called `dereferencing a pointer`.

## Passing Arguments to Functions by Reference

There are two ways to pass arguments to a function-`pass-by-value` and `pass-by-reference`. By default, arguments (other than arrays) are `passed by value`. Functions often need to modify variables in the caller or to receive a pointer to a large data object to avoid the overhead of copying the object (as in `pass-by-value`). `Pass-by-reference` also can enable a function to “return” multiple values by modifying the caller’s variables.

Pointers and the indirection operator enable `pass-by-reference`. When calling a function with arguments that should be modified in the caller, you use `&` to pass each variable’s address. A function that receives the address of a variable in the caller can use the `indirection operator (*)` to modify the value at that location in the caller’s memory, thus effecting `pass-by-reference`.

## const Qualifier and Pointers

The `const qualifier` enables you to inform the compiler that a particular variable’s value should not be modified, thus enforcing the principle of least privilege. This can reduce debugging time and prevent unintentional side effects, making a program more robust, and easier to modify and maintain. If an attempt is made to modify a value that’s declared const, the compiler catches it and issues an error.

There are four ways to pass to a function a pointer to data:

* a non-constant pointer to non-constant data.
* a constant pointer to non-constant data.
* a non-constant pointer to constant data.
* a constant pointer to constant data.

**Non-Constant Pointer to Non-Constant Data**

The highest level of data access is granted by a `non-constant pointer to non-constant data`. The data can be modified through the dereferenced pointer, and the pointer can be modified to point to other data items. A function might use such a pointer to receive a string argument, then process (and possibly modify) each character in the string.

**Non-Constant Pointer to Constant Data**

A `non-constant pointer to constant data` can be modified to point to any data item of the appropriate type, but the data to which it points cannot be modified. A function might receive such a pointer to process an array argument’s elements without modifying them.


**Constant Pointer to Non-Constant Data**

A `constant pointer to non-constant data` always points to the same memory location, but the data at that location can be modified through the pointer. This is the default for an array name, which is a constant pointer to the array’s first element. All data in the array can be accessed and changed by using the array name and array subscripting. A constant pointer to non-constant data can be used to receive an array as an argument to a function that accesses array elements using array subscript notation. Pointers that are declared const must be initialized when they’re defined. If the pointer is a function parameter, it’s initialized with a pointer argument as the function is called.

**Constant Pointer to Constant Data**

The least access privilege is granted by a `constant pointer to constant data`. Such a pointer always points to the same memory location, and the data at that memory location cannot be modified. This is how an array should be passed to a function that only looks at the array’s elements using array subscript notation and does not modify the elements.

## sizeof Operator

C provides the unary operator sizeof to determine an object’s or type’s size in bytes. This operator is applied at compilation time unless its operand is a variable-length array. When you use sizeof with a pointer, it returns the pointer’s size, not the size of the item to which it points. On 64-bit Windows, Mac and Linux test systems, a pointer’s size is eight bytes.

## Pointer Expressions and Pointer Arithmetic

Pointers are valid operands in arithmetic expressions, assignment expressions and
comparison expressions. However, not all arithmetic operators are valid with pointer variables.

### Pointer Arithmetic Operators

The following arithmetic operations are allowed for pointers:

* Incrementing (++) or decrementing (--).
* Adding an integer to a pointer (+ or +=).
* Subtracting an integer from a pointer (- or -=).
* Subtracting one pointer from another—meaningful only when both pointers point into the same array.

**Adding an Integer to a Pointer**

In conventional arithmetic, 3000 + 2 yields the value 3002. This is normally not the case with pointer arithmetic. When you add an integer to or subtract one from a pointer, the pointer increments or decrements by that integer times the size of the object to which the pointer refers. For example, the statement:

```c
vPtr += 2;
```

would produce 3008 (3000 + 2 * 4), assuming an integer is stored in four bytes of
memory.  The object’s size, depends on its type. When performing pointer arithmetic on a character array, the results will be consistent with regular arithmetic because each character is one byte. Type sizes can vary by platform and compiler, so pointer arithmetic is platform and compiler-dependent.

**Subracting an Integer to a Pointer**

If vPtr had been incremented to 3016 (v[4]), the statement:

```c
vPtr -= 4;
```

would set vPtr back to 3000 (v[0])—the beginning of the array. Using pointer arithmetic to adjust pointers to point outside an array’s bounds is a logic error that could lead to security problems.

**Incrementing and Decrementing a Pointer**

To increment or decrement a pointer by one, use the increment (++) and decrement
(--) operators.

```c
++vPtr;
vPtr++;
--vPtr;
vPtr--;
```

Any of these statements increments (decrements) the pointer to point to the next array element.

**Subtracting One Pointer from Another**

If vPtr contains the location 3000 and v2Ptr contains the address 3008, the statement:

```c
x = v2Ptr - vPtr;
```

assigns to x the number of array elements between vPtr and v2Ptr, in this case, 2. Pointer arithmetic is undefined unless performed on elements of the same array. We cannot assume that two variables of the same type are stored side-by-side in memory unless they’re adjacent elements of an array.

## Relationship between Pointers and Arrays

Arrays and pointers are intimately related and often may be used interchangeably.
You can think of an array name as a constant pointer to the array’s first element. Pointers can be used to do any operation involving array subscripting.

Example:

```c
int b[5];
int *bPtr;
```

Because the array name b (without a subscript) is a pointer to the array’s first element, we can set bPtr to the address of the array b’s first element with the statement:

```c
bPtr = b;
```

This is equivalent to taking the address of array b’s first element as follows:

```c
bPtr = &b[0];
```

**Pointer/Offset Notation**

Array element b[3] can alternatively be referenced with the pointer expression:

```c
*(bPtr + 3)
```

The 3 in the expression is the `offset` to the pointer. When bPtr points to the array’s first element, the offset indicates which array element to reference—the offset’s value is identical to the array subscript.  This notation is referred to as `pointer/offset notation`. The parentheses are required because the precedence of * is higher than that of +. Without the parentheses, the above expression would add 3 to the value of the expression *bPtr.  Just as the array element can be referenced with a pointer expression, the address:

```c
&b[3]
```

can be written with the pointer expression:

```c
bPtr + 3
```

An array’s name also can be treated as a pointer and used in pointer arithmetic.
For example, the expression:

```c
*(b + 3)
```

refers to element b[3]. In general, all subscripted array expressions can be written with a pointer and an offset. In this case, `pointer/offset notation` was used with the array’s name as a pointer. The preceding statement does not modify the array name in any way; b still points to the first element.

**Pointer/Subscript Notation**

Pointers can be subscripted like arrays. If bPtr has the value b, the expression:

```c
bPtr[1]
```

refers to the array element b[1]. This is referred to as pointer/subscript notation.

## Array of Pointers

Arrays may contain pointers. A common use of an `array of pointers` is to form an
`array of strings`, referred to simply as a `string array`. Each element in a C string is essentially a pointer to its first character. So, each entry in an array of strings is actually a pointer to a string’s first character.

Example:

```c
const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
```

The array has four elements. The char * indicates that each suit element is of type “pointer to char.” The qualifier const indicates that the string each element points to cannot be modified. The strings "Hearts", "Diamonds", "Clubs" and "Spades" are placed into the array. Each is stored in memory as a null-terminated character string that’s one character longer than the number of characters in the quotes.

Each pointer points to the first character of its corresponding string. Thus, even
though a char * array is fixed in size, it can point to character strings of any length. This flexibility is one example of C’s powerful data-structuring capabilities.

## Function Pointers

A function’s name is really the starting address in memory of the code that performs the function’s task. A pointer to a function contains the address of the function in memory. Pointers to functions can be passed to functions, returned from functions, stored in arrays, assigned to other function pointers of the same type and compared with one another for equality or inequality.

A common use of function pointers is in menu-driven systems. A program prompts a user to select an option from a menu (possibly from 0 to 2) by typing the menu item’s number. The program services each option with a different function. It stores pointers to each function in an array of function pointers. The user’s choice is used as an array subscript, and the pointer in the array is used to call the function.
















