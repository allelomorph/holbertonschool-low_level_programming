# (223) 0x0C. C - More malloc, free
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
03-05-2020 to 03-06-2020

### Description
Continued practice with dynamic memory allocation and manual memory management.

### Requirements
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Trust no one
Write a function that allocates memory using malloc.

* Prototype: `void *malloc_checked(unsigned int b);`
* Returns a pointer to the allocated memory
* if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98

File(s): [`0-malloc_checked.c`](./0-malloc_checked.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a`

### :white_check_mark: 1. string_nconcat
Write a function that concatenates two strings.

* Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
* The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
* If the function fails, it should return `NULL`
* If `n` is greater or equal to the length of `s2` then use the entire string `s2`
* if `NULL` is passed, treat it as an empty string

File(s): [`1-string_nconcat.c`](./1-string_nconcat.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat`

### :white_check_mark: 2. _calloc
Write a function that allocates memory for an array, using malloc.

* Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
* The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
* The memory is set to zero
* If `nmemb` or `size` is 0, then `_calloc` returns `NULL`
* If `malloc` fails, then `_calloc` returns `NULL`

File(s): [`2-calloc.c`](./2-calloc.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc`

### :white_check_mark: 3. array_range
Write a function that creates an array of integers.

* Prototype: `int *array_range(int min, int max);`
* The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
* Return: the pointer to the newly created array
* If `min` > `max`, return `NULL`
* If `malloc` fails, return `NULL`

File(s): [`3-array_range.c`](./3-array_range.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o 3-array_range`

## Advanced Tasks

### :white_check_mark: 4. _realloc
Write a function that reallocates a memory block using malloc and free

* Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
* where `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`
* `old_size` is the size, in bytes, of the allocated space for ptr
* and `new_size` is the new size, in bytes of the new memory block
* The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
* If `new_size` > `old_size`, the “added” memory should not be initialized
* If `new_size` == `old_size` do not do anything and return `ptr`
* If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
* If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`
* Don’t forget to free `ptr` when it makes sense

File(s): [`100-realloc.c`](./100-realloc.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-realloc.c -o 100-realloc`

### :white_check_mark: 5. We must accept finite disappointment, but never lose infinite hope
Write a program that multiplies two positive numbers.

* Usage: `mul num1 num2`
* `num1` and `num2` will be passed in base 10
* Print the result, followed by a new line
* If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of 98
* `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of 98
* You are allowed to use more than 5 functions in your file

File(s): [`101-mul.c`](./101-mul.c)
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c _putchar.c -o 101-mul`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
