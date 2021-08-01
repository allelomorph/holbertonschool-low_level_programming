# (217) 0x06. C - More pointers, arrays and strings
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-20-2020 to 02-21-2020

### Description
Continued practice with pointers and array navigation.

### Requirements
* You are not allowed to use global variables
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c) [`103-main.c`](./tests/103-main.c) [`104-main.c`](./tests/104-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. strcat
Write a function that concatenates two strings.

* Prototype: `char *_strcat(char *dest, char *src);`
* This function appends the `src` string to the dest string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
* Returns a pointer to the resulting string `dest`

File(s): [`0-strcat.c`](./0-strcat.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat`

### :white_check_mark: 1. strncat
Write a function that concatenates two strings.

* Prototype: `char *_strncat(char *dest, char *src, int n);`
* The _strncat function is similar to the `_strcat` function, except that
    * it will use at most `n` bytes from src; and
    * `src` does not need to be null-terminated if it contains `n` or more bytes
* Return a pointer to the resulting string `dest`

File(s): [`1-strncat.c`](./1-strncat.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat`

### :white_check_mark: 2. strncpy
Write a function that copies a string.

* Prototype: `char *_strncpy(char *dest, char *src, int n);`
* Your function should work exactly like `strncpy`

File(s): [`2-strncpy.c`](./2-strncpy.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy`

### :white_check_mark: 3. strcmp
Write a function that compares two strings.

* Prototype: `int _strcmp(char *s1, char *s2);`
* Your function should work exactly like `strcmp`

File(s): [`3-strcmp.c`](./3-strcmp.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp`

### :white_check_mark: 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
Write a function that reverses the content of an array of integers.

* Prototype: `void reverse_array(int *a, int n);`
* Where `n` is the number of elements of the array

File(s): [`4-rev_array.c`](./4-rev_array.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array`

### :white_check_mark: 5. Always look up
Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: `char *string_toupper(char *);`

File(s): [`5-string_toupper.c`](./5-string_toupper.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper`

### :white_check_mark: 6. Expect the best. Prepare for the worst. Capitalize on what comes
Write a function that capitalizes all words of a string.

* Prototype: `char *cap_string(char *);`
* Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`

File(s): [`6-cap_string.c`](./6-cap_string.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap`

### :white_check_mark: 7. Mozart composed his music not for the elite, but for everybody
Write a function that encodes a string into 1337/"leet speak".

* Letters `a` and `A` should be replaced by `4`
* Letters `e` and `E` should be replaced by `3`
* Letters `o` and `O` should be replaced by `0`
* Letters `t` and `T` should be replaced by `7`
* Letters `l` and `L` should be replaced by `1`
* Prototype: `char *leet(char *);`
* You can only use one if in your code
* You can only use two loops in your code
* You are not allowed to use switch
* You are not allowed to use any ternary operation

File(s): [`7-leet.c`](./7-leet.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337`

## Advanced Tasks

### :white_check_mark: 8. rot13
Write a function that encodes a string using rot13.

* Prototype: `char *rot13(char *);`
* You can only use `if` statement once in your code
* You can only use two loops in your code
* You are not allowed to use `switch`
* You are not allowed to use any ternary operation

File(s): [`100-rot13.c`](./100-rot13.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13`

### :white_large_square: 9. Numbers have life; they're not just symbols on paper
Write a function that prints an integer.

* Prototype: `void print_number(int n);`
* You can only use `_putchar` function to print
* You are not allowed to use `long`
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values

File(s): [`101-print_number.c`](./101-print_number.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers`

### :white_large_square: 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
Add one line to [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c), so that the program prints `a[2] = 98`, followed by a new line.

* You are not allowed to use the variable `a` in your new line of code
* You are not allowed to modify the variable `p`
* You can only write one statement
* You are not allowed to use `,`
* You are not allowed to code anything else than the line of expected line of code at the expected line
* Your code should be written at line 19, before the `;`
* Do not remove anything from the initial code (not even the comments)
* and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
* You are allowed to use the standard library

File(s): [`102-magic.c`](./102-magic.c)

### :white_large_square: 11. It is the addition of strangeness to beauty that constitutes the romantic character in art
Write a function that adds two numbers.

* Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
* Where `n1` and `n2` are the two numbers
* `r` is the buffer that the function will use to store the result
* `size_r` is the buffer size
* The function returns a pointer to the result
* You can assume that you will always get positive numbers, or 0
* You can assume that there will be only digits in the strings `n1` and `n2`
* `n1` and `n2` will never be empty
* If the result can not be stored in `r` the function must return 0

File(s): [`103-infinite_add.c`](./103-infinite_add.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add`

### :white_large_square: 12. Noise is a buffer, more effective than cubicles or booth walls
Write a function that prints a buffer.

* Prototype: `void print_buffer(char *b, int size);`
* The function must print the content of `size` bytes of the buffer pointed by `b`
* The output should print 10 bytes per line
* Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
* Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
* Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
* Each line ends with a new line `\n`
* If `size` is 0 or less, the output should be a new line only `\n`
* You are allowed to use the standard library

File(s): [`104-print_buffer.c`](./104-print_buffer.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
