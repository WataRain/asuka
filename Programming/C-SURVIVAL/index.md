---
title: C Survival Manual
---
# C Survival Manual

# CCPROG1 Territory

## Hello World ([hello.c](hello.c))
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
## Variables ([variables.c](variables.c))
```c
#include <stdio.h>

int main(void) {
    int x; // DECLARE an `int`eger named `x`
    x = 5; // ASSIGN `x` with 5
    printf("The value of the variable x is %d.\n", x);
    /**
     * print ("show") the value of x
     * printf means "print formatted":
     *  %d is a format specifier. IN THIS CONTEXT,
     *      % means "I want to put a"
     *      d means "decimal"
     * x refers to the decimal we want to put.
     *      printf knows to substitute x into %d because we put x at the end
    */
    return 0;
}
```
Output
```
> gcc -Wall variables.c
> .\a            (If you don't put in -o, then the output file will be named a)
The value of the variable x is 5.
```
### More Variables ([more_variables.c](more_variables.c))
```c
#include <stdio.h>

int main(void) {
    int a, b, c; // DECLARE many `int`egers (`a`, `b`, `c`) at once

    a = 1;
    b = 2;
    c = 3;

    int d = 4; // DEFINE an `int`eger named `x` with 10 as its starting value

                                                                
    //            +-------------------------------------+           
    //            |                                     |           
    //            |                 +-------------------|-----+     
    //            |                 |                   v     v     
    printf("a is %d, b is %d, c is %d, and d is %d.\n", a, b, c, d);
    //                     |                     |         ^     ^  
    //                     |                     +---------|-----+  
    //                     |                               |        
    //                     +-------------------------------+        

    return 0;
}
```
Output
```
> gcc -Wall more_variables.c
> .\a
a is 1, b is 2, c is 3, d is 4
```
### Even More Variables ([even_more_variables.c](even_more_variables.c))
```c
#include <stdio.h>

int main(void) {
    int d = 10;
    float f = 1.23; // "`float`ing point" numbers (aka numbers with a point)
    double lf = 1.23456; // floating point with `double` the precision
    char c = 'A'; // `char`acter: one letter

    printf("The integer is %d, ", d);
    printf("the float is %f, ", f);
    printf("the double is %lf, ", lf); // "lf" for "long float" (== "double")
    printf("and the char is %c.\n", c);

    return 0;
}
```
Output
```
> gcc -Wall even_more_variables.c
> .\a
The integer is 10, the float is 1.230000, the double is 1.234560, and the char is A. 
```
### Pointers
* Pointers are (memory) addresses of variables;
  they are "where the variables live".
* Be very careful when dealing with memory addresses!
  C lives closer to the computer than other programming languages.
* "With great power there must also come great responsibility."

```c
#include <stdio.h>

int main(void) {
    int d = 10;
    
    int *address;
    // Let an `int`eger exist
    // when we go to the memory address (*)" called `address`

    address = &d; // `&` == "address of"
    
    printf("%d\n", *address);
    // `*address` means "go to the memory location of "address"
    // technically speaking, it is the "dereference" operator

    return 0;
}
```
## Conditions
```c
#include <stdio.h>

int main(void) {
    int x = 10;

    if (x == 10) { // if x is 10, then go inside this "block" of code
        printf("x is 10.\n");
    }

    return 0;
}
```
Output
```
x is 10.
```
### if-else
```c
#include <stdio.h>

int main(void) {
    int x = 223;

    if (x == 10) { // if x is 10, then go inside this "block" of code
        printf("x is 10.\n");
    } else { // otherwise (== "else"), go inside this block
        printf("x is not 10.\n");        
    }

    return 0;
}
```
Output
```
x is not 10.
```
### if-else-if
```c
#include <stdio.h>

int main(void) {
    int x = 12;

    if (x == 10) { // if x is 10, then go inside this "block" of code
        printf("x is 10.\n");
    } else if (x == 12) { // otherwise, if x is 12, then go inside this block
        printf("x is 12.\n");        
    } else { // otherwise, go inside this block
        printf("x is not 10 and x is not 12.\n");
    }

    return 0;
}
```
Output
```
x is 12.
```
## scanf
```c
#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    // Scan an integer and put the result into the memory address of x.
    // (scanf needs memory addresses, hence &x)
    printf("The user typed in the number %d.\n", x);
    return 0;
}
```
Output
```
(The user typed in 5, then pressed enter)
The user typed in the number 5.
```
## Functions
### Format of a function
```c
returnType functionName(parameterType parameterName) {
    // function body
    return; // or return variableName;
}
```
* Functions are reusable code blocks that prevent programmers from repeating
  themselves

# CCPROG2 Territory

## Arrays

## Structs
