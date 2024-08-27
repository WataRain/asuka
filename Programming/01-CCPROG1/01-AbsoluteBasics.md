---
title: Hello, World: The Absolute Basics of Programming
---

> :link: [CCPROG1 Index](index.md)

# Hello, World:  The Absolute Basics of Programming

**Programming is a form of problem solving.** However, what sets apart programming from the usual problem solving is that we must create solutions that are understood by both computers and humans, instead of only the latter. Take the following scenario, for example:

> :question: Which is the highest number among these: 3, 5, 1, 0, or 999?

The answer is obviously 999, but a computer does not have the common sense to say what we have so easily observed. Instead, computers follow a *program* or a series of instructions executed by a computer, and *programming* is to create such programs via a programming language.

## Programming Languages

If one were to list down an exact sequence of steps in order to figure out the highest number in a list, one may come up with the following *pseudocode* ("fake code" meant to describe a process):

```
For each number in the list:
    if this number is the first number, then:
        remember it;
    if this number is not the first number
        and it is greater than the number previously remembered, then:
        remember the new number.
The last number remembered is the highest number in the list.
```

*Pseudocode.*

Precise and exact as it may (and must) be, computers wouldn't actually understand this, as it is not written in a language the computer understands. A traditional computer only understands ones and zeroes -- two digits (**bi**nary digi**ts**, or *bits*) that correspond to the electrical components underneath which only have two states: `ON (1)` and `OFF (0)` (more on this in [CCICOMP](../../Computing/01-CCICOMP/index.md)).

Thankfully, we do not have to program in just ones and zeroes: many a programming langauge has been made as an abstraction over binary. A *programming language* is a tool that enables programmers to communicate with the computer in an abstracted manner through *code* following certain *syntax* (grammar rules).

There are many different programming languages, each serving their own purposes. Some programming languages include:

1. C, a foundational pioneer (and the focus of CCPROG1 and [CCPROG2](../02-CCPROG2/index.md))
2. C++, a big extension of C
3. Python, a popular data science choice
4. [Java, suitable for complex enterprise applications (and the focus of CCPROG3)](../03-CCPROG3/index.md)
5. Assembly, the lowest you can go before writing in machine code (1s and 0s)

![src/Programming_process.jpg](src/Programming_process.jpg)

*The programming process for C*

Programming languages have the ability of being able to be translated into *machine code*, which is a binary representation that machines can understand. It varies how exactly (human-readable) code in a particular programming language gets translated into machine code. In C, programs are first *compiled* into machine code (via a C compiler such as [gcc](https://gcc.gnu.org/)) and the machine code is then executed (more on this soon).

## The Programming Process

In CCPROG1, the focus is on creating programs (via the C programming language) to solve problems. This entails building up logic skills to reason about various scenarios. This almost always involves processing a given input into an expected output, like so:

$$Input \rightarrow [Program] \rightarrow Output$$

*The proverbial **black box** model of programming.*

It is up to us programmers to create a program which transforms expected inputs into desired outputs, and one way to do it is to follow these steps (cyclically):

1. Problem Analysis
   * Identify inputs and outputs
2. Algorithm Design
   * Design an algorithm that is definite, exact, logical, and clear
3. Implementation
   * Implement the algorithm via code (such as in `ANSI C`)
4. Testing and Debugging
   * Create specific test cases in your program ("when x is 5, this function must...")
   * Verify that these test cases work
   * Debug your code by fixing bugs that are discovered
5. Documentation and Maintenance
  * User's Manual: guide on how to use the program
  * Technical Manual: how the program was designed/created
  * Internal Documentation: comments to inform others (and future you) about your code
   

Ideally, the resulting program would be a *black box*, where users do not really have to know how the program works, only that it does work correctly.

### Integrated Development Environment (IDE)

When it comes to actually writing programs, programmers tend to program in an *integrated development environment* (IDE), which is a set of tools used to write and run programs efficiently.

![alt text](src/devcpp.png)

CCPROG1 introduces [Dev-C++ as a beginner-friendly IDE;](https://www.bloodshed.net/) there are many alternatives, however, such as [the popular Visual Studio Code (VSCode)](https://code.visualstudio.com/). Those more comfortable with programming may opt to use text editors such as [Vim, a "highly configurable text editor"](https://www.vim.org/) or even the venerable Notepad included by default on Windows!

> Don't worry too much about IDEs if you're a beginner, though -- focus on what's truly important: programming and problem solving! With that said...

## Hello, World!

[hello.c](program\hello.c)
```c
#include <stdio.h>

int main(void) {
    printf("Hello world!\n");
    return 0;
}
```

This is a "Hello World" program -- perhaps the most iconic program in any programming language. The end result is a program that greets you by saying "Hello world!":

![A terminal window with "Hello world!" written](src/helloworld.png)

Compile your program via `gcc`, supplying in the path to your C source file, like so:

```
gcc hello.c
```

By default, `gcc` compiles your program and outputs it to a file named `a`, so just run your program like this:

```
a
```

> :warning: Some command-line shells (such as PowerShell) require you to prefix an executable with `./`, so if the above doesn't work, try typing `./a` instead.

> Next: [The Different Parts of C Code](02-CLanguage.md)


## Terms Used
1. programming
2. problem solving
3. program
4. programming language
5. pseudocode
6. binary
7. bits
8. abstraction
9. code
10. syntax
11. machine code
12. black box
13. integrated development environment (IDE)
