# (222) 0x0B. C - malloc, free
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
03-03-2020 to 03-04-2020

### Description
Introduction to dynamic vs automatic memory allocation and manual memory management.

### Requirements
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

* Prototype: `char *create_array(unsigned int size, char c);`
* Returns `NULL` if `size == 0`
* Returns a pointer to the array, or `NULL` if it fails

File(s): [`0-create_array.c`](./0-create_array.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a`

### :white_check_mark: 1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* Prototype: `char *_strdup(char *str);`
* The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
* Returns `NULL` if `str == NULL`
* On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

File(s): [`1-strdup.c`](./1-strdup.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s`

### :white_check_mark: 2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.

* Prototype: `char *str_concat(char *s1, char *s2);`
* The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
* if `NULL` is passed, treat it as an empty string
* The function should return `NULL` on failure

File(s): [`2-str_concat.c`](./2-str_concat.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat`

### :white_check_mark: 3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a 2 dimensional array of integers.

* Prototype: `int **alloc_grid(int width, int height);`
* Each element of the grid should be initialized to 0
* The function should return `NULL` on failure
* If `width` or `height` is 0 or negative, return `NULL`

File(s): [`3-alloc_grid.c`](./3-alloc_grid.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o 3-alloc_grid`

### :white_check_mark: 4. It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

* Prototype: `void free_grid(int **grid, int height);`
* Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

File(s): [`4-free_grid.c`](./4-free_grid.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o 4-free_grid`

## Advanced Tasks

### :white_check_mark: 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
Write a function that concatenates all the arguments of your program.

* Prototype: `char *argstostr(int ac, char **av);`
* Returns `NULL` if `ac == 0` or `av == NULL`
* Returns a pointer to a new string, or `NULL` if it fails
* Each argument should be followed by a `\n` in the new string

File(s): [`100-argstostr.c`](./100-argstostr.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args`

### :white_large_square: 6. I will show you how great I am
Write a function that splits a string into words.

* Prototype: `char **strtow(char *str);`
* The function returns a pointer to an array of strings (words)
* Each element of this array should contain a single word, null-terminated
* The last element of the returned array should be `NULL`
* Words are separated by spaces
* Returns `NULL` if `str == NULL` or `str == ""`
* If your function fails, it should return `NULL`

File(s): [`101-strtow.c`](./101-strtow.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
