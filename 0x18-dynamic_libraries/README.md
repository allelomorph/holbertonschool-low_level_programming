# (242) 0x18. C - Dynamic libraries
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier

### Assignment dates
05-04-2020 to 05-05-2020

### Description
Creation and use of dynamically linked libraries, and comparison to static linking.

### Requirements
* C standard library not allowed.

### Provided file(s)

---

## Mandatory Tasks

### :white_check_mark: 0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
* If you haven’t coded all of the above functions create empty ones, with the right prototype. Don’t forget to push your `main.h` file in your repository, containing at least all the prototypes of the above functions.
* You can test the symbols in your library with `nm -D`
* Linkage can be tested with `ldd`
* Don't forget to add the current directory to the linkage paths with `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

File(s): [`libdynamic.so`](./libdynamic.so), [`main.h`](./main.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len`

### :white_check_mark: 1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
* You can test its contents with `nm -D --defined-only liball.so`

File(s): [`1-create_dynamic_lib.sh`](./1-create_dynamic_lib.sh)\

### :white_check_mark: 2. Either write something worth reading or do something worth writing
Write a blog post describing the differences between static and dynamic libraries. It should cover:

* Why using libraries in general
* How do they work
* How to create them (Linux only)
* How to use them (Linux only)
* What are the differences between static and dynamic libraries
* What are the advantages and drawbacks of each of them

<!--https://www.linkedin.com/pulse/static-dynamic-c-libraries-linux-samuel-pomeroy
https://www.linkedin.com/posts/activity-6663311759937544192-gHU6
-->

## Advanced Tasks

### :white_check_mark: 3. Let's call C functions from Python
Create a dynamic library that contains C functions that can be called from Python.
* See provided `100-tests.py`

File(s): [`100-operations.so`](./100-operations.so)\

### :white_large_square: 4. Code injection: Win the Giga Millions!
*(task omitted)*

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
