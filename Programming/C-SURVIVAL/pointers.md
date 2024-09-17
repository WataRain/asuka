---
title: Pointers
---
# Pointers
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
# scanf
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
