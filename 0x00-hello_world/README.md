<img src="https://camo.githubusercontent.com/c5d27ff0111c29e03f64bc98ffd377b21d294db6/68747470733a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2d747769747465722d636172642e706e67">

# 0x00. Hello World

## Learning Objectives.
With the development of this project you learn the following:

#### * Why C programming is awesome
⋅⋅⋅C programming allows you to learn the logic of the programming and have better practices in a real world. If I'd have to learn to program again, I'd choose C for sure.

#### * Who invented C
⋅⋅⋅Monsieur [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie "Dennis Ritchie")

#### * Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
⋅⋅⋅Dennis Ritchie was the creator of C programming language. Also, created the UNIX OS\
⋅⋅⋅Brian Kernighan was the co-author of the book "C programming language". Technically, the man page of C. Also worked on UNIX development\
⋅⋅⋅Linus Torvalds is the creator of Linux Kernel. Also, is the principaal developer of it, and created the distributed version control Git

#### * What happens when you type gcc main.c
⋅⋅⋅This is the way to compile your main C file. GCC is the GNU Compiler Collection. Works translating the Super High Level instructions (Human readable programming) into binary, passing through the preprocessing process, the compile process, the assembler code and linking.\
⋅⋅⋅See [Grace Hopper](https://en.wikipedia.org/wiki/Grace_Hopper "Grace Hopper") (Yes, this is in your honor!)\
⋅⋅⋅Also [this](https://medium.com/@729_78111/gcc-compile-et-impera-518d91cd25c1 "this")

#### * What is an entry point
⋅⋅⋅Are the first intructions of a program, the procedure of starting. Generally is the use of `main`, but also some libraries allows certain functions and have to be loaded.

#### * What is `main`
⋅⋅⋅Main refers to the entry point of a program in C. Normally, `main` can receive arguments (argc and argv) and can return 1 or 0, or not return anything if is declared as <void>

#### * How to print text using printf, puts and putchar
⋅⋅⋅All of those functions have similar syntax. At first is necesary the library `<stdio.h>` that allows to manage resulting operations on the standard input/output. The standard input is the physical resource that you use to communicate with the command prompt or your computer (Keyboard, as an example). The standard output shows operations through the screen or the command prompt.\
⋅⋅⋅The functions printf and puts can print strings, formated in first case, and literal on second. Putchar prints only one character per return. The syntax is `function("string or %format specifier");`, basically.

#### * How to get the size of a specific type using the unary operator sizeof
⋅⋅⋅`Sizeof` operator can obtain size of many types, standard or created. This will be too important in allocations of memory and other operations tha implies the use of memory per type. The syntax is, basically `sizeof(type);` to obtain it. It should be saved on a variable to be used in a function.

#### * How to compile using gcc
⋅⋅⋅GCC is used as a normal command, being the firs argument itself and next arguments can be specific flags (as `-Wall`, see `man gcc`) or just the files to be compiled. Always will be a reference to the entry point main, so it's important to compile with the main file.\
⋅⋅⋅See [argument](https://www.quora.com/What-does-an-Argument-in-Programming-mean "argument")

#### * What is the default program name when compiling with gcc
⋅⋅⋅If -o flag is unused, the default is `a.out` executable

#### * What is the official Holberton C coding style and how to check your code with betty-style
⋅⋅⋅The C coding style of Holberton school is Betty coding style. It's inspired by the Linux Kernel coding style. Cloning the repository allows the installing option of Betty. Is executed as a command, being the first argument and followed by the files to be reviewed. Betty shows the line and the space of errors, if it's the case.\
⋅⋅⋅See [Betty's Wiki](https://github.com/holbertonschool/Betty/wiki "Betty") Also, you can clone it

#### * How to find the right header to include in your source code when using a standard library function
⋅⋅⋅There's an easy answer to this question: RTFM

#### * How does the main function influence the return value of the program
⋅⋅⋅If the main function is not declared as void can return an specific value of successful execution or trouble. The values are conventional, but you can put any value of the type indicated at the entry point of the function.

## Work log.

##### - How to interact on Man Pages:
⋅⋅⋅Search `/`, `?`, navigate `n` and other shortcuts\
⋅⋅⋅See `man --help`

##### - Concatenating commands to compile and execute program
⋅⋅⋅`compile` && `./[name]`

##### - Framework
⋅⋅⋅Follow the framework and RTFM

##### - Line wrapping commands
⋅⋅⋅Continue the commands and string literals with many options. From double quotes to backslash\
⋅⋅⋅See [6-size.c](https://github.com/GaviriaAmaya/holbertonschool-low_level_programming/blob/master/0x00-hello_world/6-size.c "6-size.c") and [How do I write a multi-line string literal in C?](https://jameshfisher.com/2016/11/30/c-multiline-literal/ "How do I write a multi-line string literal in C?")

## Authors.
* Juan Amaya Gaviria.

Holberton School; Cohort 8: Bog 2019
