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
