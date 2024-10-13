# Compiling


Compiling with C standard libraries
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

Compiling for testing purposes
```c
gcc -fno-stack-protector program_name.c -o program_name 
```

