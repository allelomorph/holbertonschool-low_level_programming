# (230) 0x13. C - More singly linked lists
Foundations > Low-level programming & Algorithm > Data structures and Algorithms

---

### Project authors
Julien Barbier

### Assignment dates
03-23-2020 to 03-25-2020

### Description
Continued practice using singly-linked lists.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, and `exit`.

### Provided file(s)
* [`_putchar.c`](./_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c) [`9-main.c`](./tests/9-main.c) [`10-main.c`](./tests/10-main.c) [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c) [`102-main.c`](./tests/102-main.c) [`103-main.c`](./tests/103-main.c)
* definition of `listint_s` for [`lists.h`](./lists.h)

---

## Mandatory Tasks

### :white_check_mark: 0. Print list
Write a function that prints all the elements of a `listint_t` list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example
* You are allowed to use `printf`

File(s): [`0-print_listint.c`](./0-print_listint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a`

### :white_check_mark: 1. List length
Write a function that returns the number of elements in a linked `listint_t` list.

* Prototype: `size_t listint_len(const listint_t *h);`

File(s): [`1-listint_len.c`](./1-listint_len.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b`

### :white_check_mark: 2. Add node
Write a function that adds a new node at the beginning of a `listint_t` list.

* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

File(s): [`2-add_nodeint.c`](./2-add_nodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c`

### :white_check_mark: 3. Add node at the end
Write a function that adds a new node at the end of a `listint_t` list.

* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

File(s): [`3-add_nodeint_end.c`](./3-add_nodeint_end.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d`

### :white_check_mark: 4. Free list
Write a function that frees a `listint_t` list.

* Prototype: `void free_listint(listint_t *head);`

File(s): [`4-free_listint.c`](./4-free_listint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e`

### :white_check_mark: 5. Free
Write a function that frees a `listint_t` list.

* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

File(s): [`5-free_listint2.c`](./5-free_listint2.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f`

### :white_check_mark: 6. Pop
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return 0

File(s): [`6-pop_listint.c`](./6-pop_listint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g`

### :white_check_mark: 7. Get node at index
Write a function that returns the nth node of a `listint_t` linked list.

* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where `index` is the index of the node, starting at 0
* if the node does not exist, return `NULL`

File(s): [`7-get_nodeint.c`](./7-get_nodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h`

### :white_check_mark: 8. Sum list
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

* Prototype: `int sum_listint(listint_t *head);`
* if the list is empty, return 0

File(s): [`8-sum_listint.c`](./8-sum_listint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i`

### :white_check_mark: 9. Insert
Write a function that inserts a new node at a given position.

* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

File(s): [`9-insert_nodeint.c`](./9-insert_nodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j`

### :white_check_mark: 10. Delete at index
Write a function that deletes the node at index index of a `listint_t` linked list.

* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at 0
* Returns: 1 if it succeeded, -1 if it failed

File(s): [`10-delete_nodeint.c`](./10-delete_nodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k`

## Advanced Tasks

### :white_large_square: 11. Reverse list
Write a function that reverses a `listint_t` linked list.

* Prototype: `listint_t *reverse_listint(listint_t **head);`
* Returns: a pointer to the first node of the reversed list
* You are not allowed to use more than 1 loop.
* You are not allowed to use `malloc`, `free` or arrays
* You can only declare a maximum of two variables in your function

File(s): [`100-reverse_listint.c`](./100-reverse_listint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l`

### :white_large_square: 2. Print (safe version)
Write a function that prints a `listint_t` linked list.

* Prototype: `size_t print_listint_safe(const listint_t *head);`
* Returns: the number of nodes in the list
* This function can print lists with a loop
* You should go through the list only once
* If the function fails, exit the program with status 98

File(s): [`101-print_listint_safe.c`](./101-print_listint_safe.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m`

### :white_large_square: 13. Free (safe version)
Write a function that frees a `listint_t` list.

* Prototype: `size_t free_listint_safe(listint_t **h);`
* This function can free lists with a loop
* You should go though the list only once
* Returns: the size of the list that was free’d
* The function sets the `head` to `NULL`

File(s): [`102-free_listint_safe.c`](./102-free_listint_safe.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n`

### :white_large_square: 14. Find the loop
Write a function that finds the loop in a linked list.

* Prototype: `listint_t *find_listint_loop(listint_t *head);`
* Returns: The address of the node where the loop starts, or `NULL` if there is no loop
* You are not allowed to use `malloc`, `free` or arrays
* You can only declare a maximum of two variables in your function

File(s): [`103-find_loop.c`](./103-find_loop.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
