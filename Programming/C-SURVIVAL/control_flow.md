---
title: Control Flow
---
## Control Flow

### If
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
#### If-Else
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
#### if-else-if
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

### For Loops

### While Loops

### Do-While Loops
