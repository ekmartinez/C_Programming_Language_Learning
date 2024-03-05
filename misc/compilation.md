Compile with C Standard Libraries
```c
gcc program_name.c -o program_name
```
Compile with external libraries
```c
gcc program_name.c -o program_name -lm
```
Compile so it can run on older versions
```c
gcc -static program_name.c -o program_name 
```
