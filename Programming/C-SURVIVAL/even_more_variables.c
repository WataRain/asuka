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
