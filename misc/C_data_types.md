# Data Types

In the C programming language, data types are fundamental building blocks that define the type of values a variable can hold and the operations that can be performed on those values. C provides several basic data types, including `int` for integers, `float` for floating-point numbers, `char` for individual characters, and `_Bool` (or bool from the `<stdbool.h>` header) for Boolean values. **These data types determine the size of memory allocated for variables and specify the range of values they can store**. Additionally, C allows developers to create user-defined data types such as **arrays** and **structures**, enabling the organization of complex data structures. Understanding data types is essential for efficient memory usage and accurate representation of data in C programs.


* **int:** Stands for integer. It is used to store whole numbers (both positive and negative) without any decimal. For example: `int num = 42;`

* **unsigned int**: Similar to int, but it can only store non-negative integers (zero and positive numbers). For example: `unsigned int count = 10;`

* **float:** Used for floating-point numbers, i.e., numbers that have decimal parts. For example: `float pi = 3.14;`

* **double:** Similar to float but with higher precision. Used for storing floating-point numbers with more decimal places. For example: `double pi = 3.141592653589793;`

* **char:** Stands for character. Used for storing single characters, like letters and symbols. For example: `char grade = 'A';`

* **void:** Represents an empty or unspecified type. It is often used in function return types when the function does not return a value. For example: `void function();`

* **long:** A data type that can hold larger integers than int. Useful when int is not large enough to store the required value. For example: `long bigNumber = 1234567890;`

* **long long:** An even larger data type for integers. Used for very large numbers. For example: `long long hugeNumber = 1234567890123456789;`

* **short:** Represents a smaller range of integers than int. Useful when memory conservation is a concern. For example: `short smallNumber = 100;`


**16-bit Integer Types**

|Type                 | Smallest Value | Largest Value |
|---------------------|----------------|---------------|
|short int            |        -32,768 |        32,767 |
|unsigned short int   |              0 |        65,535 |
|int                  |        -32,768 |        32,767 |
|unsigned int         |              0 |        65,535 |
|long int             | -2,147,483,648 | 2,147,483,647 |
|unsigned long int    |              0 | 4,294,967,295 |


**32-bit Integer Types**

|Type                 | Smallest Value | Largest Value |
|---------------------|----------------|---------------|
|short int            |        -32,768 |        32,767 |
|unsigned short int   |              0 |        65,535 |
|int                  | -2,147,483,648 | 2,147,483,647 |
|unsigned int         |              0 | 4,294,967,295 |
|long int             | -2,147,483,648 | 2,147,483,647 |
|unsigned long int    |              0 | 4,294,967,295 |


**64-bit Integer Types**

|Type                 |             Smallest Value |              Largest Value |
|---------------------|----------------------------|----------------------------|
|short int            |                    -32,768 |                     32,767 |
|unsigned short int   |                          0 |                     65,535 |
|int                  |             -2,147,483,648 |              2,147,483,647 |
|unsigned int         |                          0 |              4,294,967,295 |
|long int             | –9,223,372,036,854,775,808 |  9,223,372,036,854,775,807 |
|unsigned long int    |                          0 | 18,446,744,073,709,551,615 |