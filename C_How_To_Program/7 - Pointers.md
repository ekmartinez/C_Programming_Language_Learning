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

Pointers and the indirection operator enable `pass-by-reference`. When calling a function with arguments that should be modified in the caller, you use & to pass each variable’s address. A function that receives the address of a variable in the caller can use the `indirection operator (*)` to modify the value at that location in the caller’s memory, thus effecting `pass-by-reference`.

## const Qualifier and Pointers

The `const qualifier` enables you to inform the compiler that a particular variable’s value should not be modified, thus enforcing the principle of least privilege. This can reduce debugging time and prevent unintentional side effects, making a program more robust, and easier to modify and maintain. If an attempt is made to modify a value that’s declared const, the compiler catches it and issues an error.

There are four ways to pass to a function a pointer to data:

* a non-constant pointer to non-constant data.
* a constant pointer to non-constant data.
* a non-constant pointer to constant data.
* a constant pointer to constant data.

**Non-constant pointer to non-constant data**

The highest level of data access is granted by a non-constant pointer to non-constant data. The data can be modified through the dereferenced pointer, and the pointer can be modified to point to other data items. A function might use such a pointer to receive a string argument, then process (and possibly modify) each character in the string.

















