# (225) 0x0E. C - Structures, typedef
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project authors
Julien Barbier

### Assignment dates
03-09-2020 to 03-10-2020

### Description
Introduction to structures and type definitions in C.

### Requirements
* The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`.

### Provided file(s)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) 

---

## Mandatory Tasks

### :white_check_mark: 0. Poppy
Define a new type `struct dog` with the following elements:

* `name`, type = `char *`
* `age`, type = `float`
* `owner`, type = `char *`

File(s): [`dog.h`](./dog.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a`

### :white_check_mark: 1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initializes a variable of type `struct dog`

* Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

File(s): [`1-init_dog.c`](./1-init_dog.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b`

### :white_check_mark: 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

* Prototype: `void print_dog(struct dog *d);`
* You are allowed to use the standard library
* If an element of `d` is `NULL`, print (nil) instead of this element. (if name is `NULL`, print `Name: (nil)`)
* If `d` is `NULL` print nothing.

File(s): [`2-print_dog.c`](./2-print_dog.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c`

### :white_check_mark: 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type `dog_t` as a new name for the type `struct dog`.

File(s): [`dog.h`](./dog.h)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d`

### :white_check_mark: 4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog.

* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
* You have to store a copy of `name` and `owner`
* Return `NULL` if the function fails

File(s): [`4-new_dog.c`](./4-new_dog.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e`

### :white_check_mark: 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.

* Prototype: `void free_dog(dog_t *d);`

File(s): [`5-free_dog.c`](./5-free_dog.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
