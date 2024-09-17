---
title: Variables
---
# Variables ([variables.c](variables.c))
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
# More Variables ([more_variables.c](more_variables.c))
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
# Even More Variables ([even_more_variables.c](even_more_variables.c))
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

