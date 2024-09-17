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
