# (232) 0x14. C - Bit manipulation
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier

### Assignment dates
03-26-2020 to 03-27-2020

### Description
Introduction to operations that alter individiual bit values.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, and `exit`.

### Provided file(s)
* [`_putchar.c`](./_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`100-main.c`](./tests/100-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. 0
Write a function that converts a binary number to an unsigned int.

* Prototype: `unsigned int binary_to_uint(const char *b);`
* where `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 if
    * there is one or more chars in the string `b` that is not 0 or 1
    * `b` is `NULL`

File(s): [`0-binary_to_uint.c`](./0-binary_to_uint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a`

### :white_check_mark: 1. 1
Write a function that prints the binary representation of a number.

* Prototype: `void print_binary(unsigned long int n);`
* You are not allowed to use arrays
* You are not allowed to use `malloc`
* You are not allowed to use the `%` or `/` operators

File(s): [`1-print_binary.c`](./1-print_binary.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b`

### :white_check_mark: 2. 10
Write a function that returns the value of a bit at a given index.

* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* where `index` is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index `index` or -1 if an error occured

File(s): [`2-get_bit.c`](./2-get_bit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c`

### :white_check_mark: 3. 11
Write a function that sets the value of a bit to 1 at a given index.

* Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
* where `index` is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

File(s): [`3-set_bit.c`](./3-set_bit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d`

### :white_check_mark: 4. 100
Write a function that sets the value of a bit to 0 at a given index.

* Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
* where `index` is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

File(s): [`4-clear_bit.c`](./4-clear_bit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e`

### :white_check_mark: 5. 101
Write a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
* You are not allowed to use the `%` or `/` operators

File(s): [`5-flip_bits.c`](./5-flip_bits.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f`

## Advanced Tasks

### :white_check_mark: 6. Endianness
Write a function that checks the endianness.

* Prototype: `int get_endianness(void);`
* Returns: 0 if big endian, 1 if little endian

File(s): [`100-get_endianness.c`](./100-get_endianness.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h`

### :white_large_square: 7. Crackme3
Find the password for [this program](https://github.com/holbertonschool/0x13.c).

* Save the password in the file `101-password`
* Your file should contain the exact password, no new line, no extra space

File(s): [`101-password`](./101-password)\

### :white_check_mark: 8. Two's complement and negative numbers
Write a blog post on how integers are stored in memory using two’s complement.

* Have at least one picture, at the top of the blog post
* Have a few examples covering positive and negative numbers
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn

<!--
https://www.linkedin.com/posts/activity-6649922412110577664-hUpz
https://www.linkedin.com/pulse/1-2s-complement-samuel-pomeroy
-->

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
