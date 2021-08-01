# (212) 0x00-hello_world
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-05-2020 to 02-06-2020

### Description
First introduction to the C programming language, print functions `printf`, `puts`, and `putchar`, plus simple compilation with `gcc`.

### Provided file(s)
* [`main.c`](./main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

File(s): [`0-preprocessor`](./0-preprocessor)

### :white_check_mark: 1. Compiler
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    * Example: if the C file is `main.c`, the output file should be `main.o`

File(s): [`1-compiler`](./1-compiler)

### :white_check_mark: 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    * Example: if the C file is `main.c`, the output file should be `main.s`

File(s): [`2-assembler`](./2-assembler)

### :white_check_mark: 3. Name
Write a script that compiles a C file and creates an executable named cisfun.

* The C file name will be saved in the variable `$CFILE`

File(s): [`3-name`](./3-name)

### :white_check_mark: 4. Hello, puts
Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

* Use the function `puts`
* You are not allowed to use `printf`
* Your program should end with the value 0

File(s): [`4-puts.c`](./4-puts.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c`

### :white_check_mark: 5. Hello, printf
Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

* Use the function `printf`
* You are not allowed to use the function `puts`
* Your program should return 0
* Your program should compile without warning when using the -Wall gcc option

File(s): [`5-printf.c`](./5-printf.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c`

### :white_check_mark: 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option

File(s): [`6-size.c`](./6-size.c)\
Compiled: `gcc 6-size.c -m32 -o size32 2> /tmp/32`, `gcc 6-size.c -m64 -o size64 2> /tmp/64`

### :white_check_mark: 7. What happens when you type gcc main.c
Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.

* Use `gcc` as the compiler
* Have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
* Please, remember that these blogs must be written in English to further your technical ability in a variety of settings

Blog: [What happens when you type 'gcc' in Linux?](https://www.linkedin.com/pulse/what-happens-when-you-type-gcc-linux-samuel-pomeroy)\
Share: [LinkedIn](https://www.linkedin.com/posts/activity-6631078071464194049-_sZ-)

## Advanced Tasks

### :white_check_mark: 8. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`.
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    * Example: if the C file is `main.c`, the output file should be `main.s`

File(s): [`100-intel`](./100-intel)

### :white_large_square: 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
* Your program should return 1
* Your program should compile without any warnings when using the `-Wall` `gcc` option

File(s): [`101-quote.c`](./101-quote.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
