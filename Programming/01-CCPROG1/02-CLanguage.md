---
title: The Different Parts of C Code
---

> :link: [CCPROG1 Index](index.md)

# The Different Parts of C Code

Regardless of language, many programmers begin their journey by writing a "Hello World" program. In C, that looks like this:

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

## Tokens

Tokens are the atomic parts of code, and are basically the "words" which comprise it. Every single one of these tokens are parsed and understood by the compiler in order to generate the corresponding executable file.

There are many different types of tokens:

1. Identifiers
2. Keywords
3. Literals
4. Operators

### Identifiers

Identifiers are the IDs or names given to a variable, function, or constant. Examples include:
* `main` in `int main(void)`{:.language-c .highlight}
* `add`, `x`, and `y` in `int add(int x, int y)`{:.language-c .highlight}.

#### Valid Identifier Naming Rules

1. Unique
2. Case-sensitive
3. Can't start with a number
4. Can't contain spaces
5. Can't use keywords

### Keywords

Keywords are words reserved by the C language itself and already have defined meanings to them:
* `int` means integer
* `return` means to return a value from a function
* `printf` is a function reserved by the `<stdio.h>` header
* `if` and `else` are used to control a program's *control flow*, or how to deal with certain conditions
* [See Microsoft's list of C keywords here](https://learn.microsoft.com/en-us/cpp/c-language/c-keywords?view=msvc-170)

> :construction: The following parts are under construction!

### Literals

Literals always have the same value in every program, e.g., `1` will always be one.

* Numeric literals are integers like `1` or floating point (decimal) numbers lke `3.45`.
* Non-numeric literals 
   * Character literals are single-character values like `'a'`, `'b'`, and `'c'`. They are bounded in single-quote marks (`'`).
     * Take note: the backslash (`\`) character is the *escape character*. Certain *escape sequences* can be made with `\`, like `'\n'` which is considered one character and therefore a valid character literal. `'\n'` stands for **n**ewline (basically, pressing "enter").
   * String literals are multiple-character values like `"Hello world!"`.

### Operators

Operators perform operations on operands, such as addition, assignment, and comparison, among others.

1. Assignment
2. Arithmetic
   a.  `+`, `-`, `*`, and `/` 
3. Logical


## Expressions

Together, tokens make up expressions.

## Terms Used
1. pre-processor directive
2. function
3. return type
4. parameter
5. statement
