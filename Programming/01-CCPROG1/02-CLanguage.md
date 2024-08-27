---
title: The Different Parts of C Code
---

> :link: [CCPROG1 Index](index.md)

# The Different Parts of C Code

Many programmers begin their journey by writing a "Hello World" program. In C, that looks like this:

[hello.c](program\hello.c)
```c
#include <stdio.h>              // pre-processor directive

int main(void) {                // function: return type, name, parameters
    printf("Hello world!\n");   // statement
    return 0;                   // statement
}
```

Which ends with a program that greets you with "Hello world!":

![Compile your program via `gcc`, supplying in the path to your C source file. By default, `gcc` compiles your program and outputs it to a file named `a`.](src/helloworld.png)

Already, this minimal program exposes certain parts of C code: pre-processor directives, functions, and statements!

### Pre-processor directives

Statements beginning with a `#` like `#include <stdio.h>` are *pre-processor directives*. Pre-processor directives inform or order certain "directives" or instructions to do before a compiler (such as `gcc`) compiles the program.

The `#include <stdio.h>` directive includes the **st**an**d**ard **i**put **o**utput **h**eader or `stdio.h`, which defines functions such as `printf()` so we can use them in our program. (Some more headers we can include are `time.h` and `math.h`, among others -- and we can even make our own!)

### Functions

*Functions* define a series of steps in a program. In the C langauge, they are declared in the format `returnType name(parameters)`, with the actual steps therein being enclosed in `{ brackets }`.

#### Parts of a Function
1. Return type: what the function "returns" once it finishes
2. Name: the name of the function
3. Parameters: what type of input the function accepts and what names to use when referring to them in the function

The *main function*, `int main(void)`, is special: every C program starts there (it is the *entry point!*). Its return type is an `int` or integer, because it returns `0` at the end (by convention, to indicate 0 errors happened; otherwise, a different number may be returned!). The parameter being `void` means that it accepts no input anywhere, though this can be changed!

On the other hand, here's an example of a "normal" function:
```c
int add(int x, int y) {
    return x + y;
}
```

### Statements

*Statements* are the building block of functions. They can call other functions (e.g., `printf("Hello world!\n");`) and return values (e.g., `return 0;`), among other things. In C, all statements must end with a `semi-colon (;)`.

> :construction: The following parts are under construction!

## Tokens

Tokens are the atomic parts of code, and are basically the "words" which comprise it.

### Identifiers

### Keywords

### Literals

### Operators

## Expressions

## Terms Used
1. pre-processor directive
2. function
3. return type
4. parameter
5. statement
