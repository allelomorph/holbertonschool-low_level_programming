# (228) 0x11. C - printf
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier

### Assignment dates
03-13-2020 to 03-18-2020

### Description
First team project, building a clone of glibc `printf`.

### Requirements
* Only the following C standard library functions are allowed:
  * `write(2)`
  * `malloc(3)`
  * `free(3)`
  * `va_start(3)`
  * `va_end(3)`
  * `va_copy(3)`
  * `va_arg(3)`
* Compilation for all tasks: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

### Provided file(s)
* [`main.c`](https://github.com/allelomorph/printf/tests/main.c)
* [`3-main.c`](https://github.com/allelomorph/printf/tests/3-main.c)
* [`7-main.c`](https://github.com/allelomorph/printf/tests/7-main.c)

### Note
This project can be found in a separate repository: [`printf`](https://github.com/allelomorph/printf). This README is to provide the project profile separate from the README originally included with the project itself.

---

## Mandatory Tasks

### :white_large_square: 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.

* Prototype: `int _printf(const char *format, ...);`
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
    * `c`
    * `s`
    * `%`
* You don’t have to reproduce the buffer handling of the C library `printf` function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### :white_large_square: 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

* `d`
* `i`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### :white_check_mark: 2. Just because it's in print doesn't mean it's the gospel
Create a man page for your function.

File(s): [`man_3_printf`](https://github.com/allelomorph/printf/man_3_printf)

## Advanced Tasks

### :white_large_square: 3. With a face like mine, I do better in print
Handle the following custom conversion specifiers:

* `b`: the unsigned int argument is converted to binary

### :white_large_square: 4. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

* `u`
* `o`
* `x`
* `X`
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### :white_large_square: 5. Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call `write` as little as possible.

### :white_large_square: 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: `p`.

* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

### :white_large_square: 7. My weakness is wearing too much leopard print
Handle the following custom conversion specifier:

* `S` : prints the string.
* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

### :white_large_square: 8. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:

* `+`
* space
* `#`

### :white_large_square: 9. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:

* `l`
* `h`

Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

### :white_large_square: 10. Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

### :white_large_square: 11. The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

### :white_large_square: 12. It's depressing when you're still around and your albums are out of print
Handle the `0` flag character for non-custom conversion specifiers.

### :white_large_square: 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the `-` flag character for non-custom conversion specifiers.

### :white_check_mark: 14. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:

* `r` : prints the reversed string

### :white_check_mark: 15. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:

* `R`: prints the rot13'ed string

### :white_large_square: 16. *
All the above options work well together.

---

## Student team
* **Andrew Cox** - [AndrewC7](https://github.com/AndrewC7)
* **Samuel Pomeroy** - [allelomorph](https://github.com/allelomorph)
* **Sam Messenger** - [SamMessenger](https://github.com/sammessenger)
