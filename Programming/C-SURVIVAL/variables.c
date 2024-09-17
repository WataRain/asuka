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
