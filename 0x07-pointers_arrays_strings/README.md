# (218) 0x07. C - Even more pointers, arrays and strings
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-24-2020 to 02-25-2020

### Description
Further practice with pointers and array navigation, with a focus on multidimensional arrays.

### Requirements
* You are not allowed to use global variables
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`crackme2`](./crackme2) originally [here](https://github.com/holbertonschool/0x06.c/crackme2)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c) [`100-main.c`](./tests/100-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. memset
Write a function that fills memory with a constant byte.

* Prototype: `char *_memset(char *s, char b, unsigned int n);`
* The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
* Returns a pointer to the memory area `s`

File(s): [`0-memset.c`](./0-memset.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset`

### :white_check_mark: 1. memcpy
Write a function that copies memory area.

* Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
* The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
* Returns a pointer to `dest`

File(s): [`1-memcpy.c`](./1-memcpy.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy`

### :white_check_mark: 2. strchr
Write a function that locates a character in a string.

* Prototype: `char *_strchr(char *s, char c);`
* Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

File(s): [`2-strchr.c`](./2-strchr.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr`

### :white_check_mark: 3. strspn
Write a function that gets the length of a prefix substring.

* Prototype: `unsigned int _strspn(char *s, char *accept);`
* Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

File(s): [`3-strspn.c`](./3-strspn.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn`

### :white_check_mark: 4. strpbrk
Write a function that searches a string for any of a set of bytes.

* Prototype: `char *_strpbrk(char *s, char *accept);`
* The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
* Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

File(s): [`4-strpbrk.c`](./4-strpbrk.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk`

### :white_check_mark: 5. strstr
Write a function that locates a substring.

* Prototype: `char *_strstr(char *haystack, char *needle);`
* The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
* Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

File(s): [`5-strstr.c`](./5-strstr.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr`

### :white_check_mark: 6. Chess is mental torture
Write a function that prints the chessboard.

* Prototype: `void print_chessboard(char (*a)[8]);`

File(s): [`7-print_chessboard.c`](./7-print_chessboard.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard`

### :white_check_mark: 7. The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers.

* Prototype: `void print_diagsums(int *a, int size);`
* You are allowed to use the standard library

File(s): [`8-print_diagsums.c`](./8-print_diagsums.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums`

## Advanced Tasks

### :white_check_mark: 8. Double pointer, double fun
Write a function that sets the value of a pointer to a char.

* Prototype: `void set_string(char **s, char *to);`

File(s): [`100-set_string.c`](./100-set_string.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string`

### :white_large_square: 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c/crackme2) executable.

* Your file should contain the exact password, no new line, no extra space
* `ltrace`, `ldd`, `gdb` and `objdump` can help
* You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
* Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`

File(s): [`101-crackme_password`](./101-crackme_password)

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
