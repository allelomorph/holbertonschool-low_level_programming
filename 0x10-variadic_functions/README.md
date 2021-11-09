# (227) 0x10. C - Variadic functions
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier

### Assignment dates
03-13-2020 to 03-16-2020

### Description
Introduction to functions in C that can take an indeterminate number of parameters.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, and `exit`.

### Provided file(s)
* [`_putchar.c`](./_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.

* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0`, return `0`

File(s): [`0-sum_them_all.c`](./0-sum_them_all.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a`

### :white_check_mark: 1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.

* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* where `separator` is the string to be printed between numbers
* and `n` is the number of integers passed to the function
* You are allowed to use `printf`
* If `separator` is `NULL`, don’t print it
* Print a new line at the end of your function

File(s): [`1-print_numbers.c`](./1-print_numbers.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b`

### :white_check_mark: 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.

* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
* where `separator` is the string to be printed between the strings
* and `n` is the number of strings passed to the function
* You are allowed to use `printf`
* If separator is `NULL`, don’t print it
* If one of the string is `NULL`, print `(nil)` instead
* Print a new line at the end of your function

File(s): [`2-print_strings.c`](./2-print_strings.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c`

### :white_check_mark: 3. To be is a to be the value of a variable
Write a function that prints anything.

* Prototype: `void print_all(const char * const format, ...);`
* where `format` is a list of types of arguments passed to the function
    * `c`: `char`
    * `i`: `integer`
    * `f`: `float`
    * `s`: `char *` (if the string is `NULL`, print `(nil)` instead)
    * any other char should be ignored
* You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
* You can use a maximum of
    * 2 `while` loops
    * 2 `if`
* You can declare a maximum of 9 variables
* You are allowed to use `printf`
* Print a new line at the end of your function

File(s): [`3-print_all.c`](./3-print_all.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d`

## Advanced Tasks

### :white_large_square: 4. Real programmers can write assembly code in any language
Write a 64-bit program in assembly that prints `Hello, World`, followed by a new line.
* You are only allowed to use the system call `write` (use `int` or `syscall`, not a call)
* Your program will be compiled using `nasm` and `gcc` (as follows)

File(s): [`100-hello_world.asm`](./100-hello_world.asm)\
Compiled: `nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
