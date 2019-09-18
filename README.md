# 0. Preprocessor mandatory
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable $CFILE
* The output should be saved in the file c

```bash
#!/bin/bash
gcc -E $CFILE -o c
```

# 1. Compiler mandatory
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .o instead of .c.
* Example: if the C file is main.c, the output file should be main.o

```bash
#!/bin/bash
gcc -S $CFILE 
```

# 2. Assembler mandatory
Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable $CFILE
* The output file should be named the same as the C file, but with the extension .s instead of .c.
* Example: if the C file is main.c, the output file should be main.s

```bash
#!/bin/bash
gcc -c $CFILE 
```

# 3. Name mandatory
Write a script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable $CFILE

```bash
#!/bin/bash
gcc $CFILE -o cisfun 
```

# 4. Hello, puts mandatory
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

* Use the function puts
* You are not allowed to use printf
* Your program should end with the value 0

```c
#include <stdio.h>

int main(void){
  puts("\"Programming is like building a multilingual puzzle");
  return(0);
}
```
