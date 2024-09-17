---
title: Hello World
---
# Hello World ([hello.c](hello.c))
```c
// This is a comment -- it doesn't do anything

/**
 * This is also a comment -- it doesn't do anything
 */

#include <stdio.h>
/**
 *  include the STandarD Input/Output Header
 *  ^ "Give me printf(), scanf(), etc."
 *             ^         ^ lets people INPUT stuff
 *             OUTPUTs stuff on the terminal/"screen"
 */

int main(void) {
    /*
     * Every C program starts at the MAIN FUNCTION, often declared like this;
     * don't worry about it for now
     */

    printf("Welcome to the C Survival Manual!\n");
    // prints "Welcome to the C Surival Manual!" on the screen
    // the "\n" is like pressing enter; it means NEWLINE ("start a new line")

    return 0;
    /*
     * Every C program ends with `return 0;`
     * don't worry about it for now
     * (in this context, it basically means "0 things went wrong")
     */
}
```

To actually compile the program, open the terminal to the folder where the
program lives, and type in this (excluding <>):
```
> gcc -Wall <input.c> -o <output>
```
* `gcc` means GNU Compiler Collection; it's a set of compilers made by GNU to
  help us compile our programs ("make them into exe files")
  * We're only interested in their C compiler though -- also named `gcc`
    (for GNU C Compiler)
* `-Wall` means "`W`arnings: `all`"; it's not technically needed but it helps
  prevent weird things
* `input.c` must be substituted with the name of the C program you're compiling
* `-o` means "`o`utput"; whatever you put after (`output`) will be the name of
  your output file.

The program above was named `hello.c`. If we wanted to name the executable
file `my_program`, then it would be:
```
> gcc -Wall hello.c -o my_program
```
To actually use your program, you can do the following:
```
> .\my_program
Welcome to the C Survival Manual!
```
