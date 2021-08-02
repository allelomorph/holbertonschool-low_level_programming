# (224) 0x0D. C - Preprocessor
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier, Johan Euphrosine

### Assignment dates
03-09-2020 to 03-10-2020

### Description
Introduction to `gcc` preprocessor macro sytnax.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

### Provided file(s)
* [`hague.c`](./hague.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Object-like Macro
Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

File(s): [`0-object_like_macro.h`](./0-object_like_macro.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`

### :white_check_mark: 1. Pi
Create a header file that defines a macro named `PI` as an abbreviation for the token 3.14159265359.

File(s): [`1-pi.h`](./1-pi.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b`

### :white_check_mark: 2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.

* You are allowed to use the standard library

File(s): [`2-main.c`](./2-main.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c`

### :white_check_mark: 3. Function-like macro
Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

File(s): [`3-function_like_macro.h`](./3-function_like_macro.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d`

### :white_check_mark: 4. SUM
Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

File(s): [`4-sum.h`](./4-sum.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e`

## Advanced Tasks

### :white_large_square: 5. Worst abuse of the C preprocessor (IOCCC winner, 1986)
Compile [this program](./hague.c), written by Jim Hague (UK), and feed ascii text into standard input.

* Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
* You blog post should have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn

[Example](https://www.linux.com/audience/enterprise/untangling-macros-c/) by Holberton student Anne Cognet

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
