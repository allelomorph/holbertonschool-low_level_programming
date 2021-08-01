# (216) 0x05. C - Pointers, arrays and strings
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-17-2020 to 02-19-2020

### Description
Introduction to pointers and array navigation.

### Requirements
* You are not allowed to use global variables
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`101-crackme`](./101-crackme) originally [here](https://github.com/holbertonschool/0x04.c/blob/master/101-crackme)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c) [`9-main.c`](./tests/9-main.c) [`100-main.c`](./tests/100-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. 98 Battery st.
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

* Prototype: `void reset_to_98(int *n);`

File(s): [`0-reset_to_98.c`](./0-reset_to_98.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98`

### :white_check_mark: 1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

* Prototype: `void swap_int(int *a, int *b);`

File(s): [`1-swap.c`](./1-swap.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap`

### :white_check_mark: 2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.

* Prototype: `int _strlen(char *s);`

File(s): [`2-strlen.c`](./2-strlen.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen`

### :white_check_mark: 3. I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line, to stdout.

* Prototype: `void _puts(char *str);`

File(s): [`3-puts.c`](./3-puts.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts`

### :white_check_mark: 4. I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.

* Prototype: `void print_rev(char *s);`

File(s): [`4-print_rev.c`](./4-print_rev.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev`

### :white_check_mark: 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.

* Prototype: `void rev_string(char *s);`

File(s): [`5-rev_string.c`](./5-rev_string.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string`

### :white_check_mark: 6. Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

* Prototype: `void puts2(char *str);`

File(s): [`6-puts2.c`](./6-puts2.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2`

### :white_check_mark: 7. Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line.

* Prototype: `void puts_half(char *str);`
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

File(s): [`7-puts_half.c`](./7-puts_half.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half`

### :white_check_mark: 8. Arrays are not pointers
Write a function that prints `n` elements of an array of integers, followed by a new line.

* Prototype: `void print_array(int *a, int n);`
* where `n` is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use `printf`

File(s): [`8-print_array.c`](./8-print_array.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array`

### :white_check_mark: 9. strcpy
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

* Prototype: `char *_strcpy(char *dest, char *src);`
* Return value: the pointer to `dest`

File(s): [`9-strcpy.c`](./9-strcpy.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy`

## Advanced Tasks

### :white_large_square: 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
Write a function that convert a string to an integer.

* Prototype: `int _atoi(char *s);`
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the `-` and `+` signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use `long`
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* `gcc` flag `-fsanitize=signed-integer-overflow` used in compilation

File(s): [`100-atoi.c`](./100-atoi.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi`

### :white_large_square: 11. Don't hate the hacker, hate the code
Create a program that generates random valid passwords for the program [`101-crackme`](https://github.com/holbertonschool/0x04.c/blob/master/101-crackme).

* You are allowed to use the standard library
* You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
* man `srand`, `rand`, `time`
* `gdb` and `objdump` can help

File(s): [`101-keygen.c`](./101-keygen.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
