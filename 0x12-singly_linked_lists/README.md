# (229) 0x12. C - Singly linked lists
Foundations > Low-level programming & Algorithm > Data structures and Algorithms

---

### Project authors
Julien Barbier

### Assignment dates
03-19-2020 to 03-20-2020

### Description
Introduction to common data structures as expressed in C, beginning with singly-linked lists.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, and `exit`.

### Provided file(s)
* [`_putchar.c`](./_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`100-main.c`](./tests/100-main.c)
* definition of `list_s` for [`lists.h`](./lists.h)

---

## Mandatory Tasks

### :white_check_mark: 0. Print list
Write a function that prints all the elements of a `list_t` list.

* Prototype: `size_t print_list(const list_t *h);`
* Return: the number of nodes
* Format: see example
* If `str` is `NULL`, print `[0] (nil)`
* You are allowed to use `printf`

File(s): [`0-print_list.c`](./0-print_list.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a`

### :white_check_mark: 1. List length
Write a function that returns the number of elements in a linked `list_t` list.

* Prototype: `size_t list_len(const list_t *h);`

File(s): [`1-list_len.c`](./1-list_len.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b`

### :white_check_mark: 2. Add node
Write a function that adds a new node at the beginning of a `list_t` list.

* Prototype: `list_t *add_node(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`

File(s): [`2-add_node.c`](./2-add_node.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c`

### :white_check_mark: 3. Add node at the end
Write a function that adds a new node at the end of a list_t list.

* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`

File(s): [`3-print_all.c`](./3-print_all.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d`

### :white_check_mark: 4. Free list
Write a function that frees a `list_t` list.

* Prototype: `void free_list(list_t *head);`

File(s): [`4-free_list.c`](./4-free_list.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e`

## Advanced Tasks

### :white_check_mark: 5. The Hare and the Tortoise
Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.

* You are allowed to use the `printf` function

File(s): [`100-first.c`](./100-first.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
