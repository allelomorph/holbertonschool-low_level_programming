# (240) 0x17. C - Doubly linked lists
Foundations > Low-level programming & Algorithm > Data structures and Algorithms

---

### Project authors
Julien Barbier

### Assignment dates
05-01-2020 to 05-04-2020

### Description
Introduction to linked lists that cen be traversed both forwards and backwards.

### Requirements
* The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`.

### Provided file(s)
* definition of `dlistint_t` for `lists.h`
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Print list
Write a function that prints all the elements of a `dlistint_t` list.

* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes

File(s): [`0-print_dlistint.c`](./0-print_dlistint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a`

### :white_check_mark: 1. List length
Write a function that returns the number of elements in a linked `dlistint_t` list.

* Prototype: `size_t dlistint_len(const dlistint_t *h);`

File(s): [`1-dlistint_len.c`](./1-dlistint_len.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b`

### :white_check_mark: 2. Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

File(s): [`2-add_dnodeint.c`](./2-add_dnodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c`

### :white_check_mark: 3. Add node at the end
Write a function that adds a new node at the end of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

File(s): [`3-add_dnodeint_end.c`](./3-add_dnodeint_end.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d`

### :white_check_mark: 4. Free list
Write a function that frees a `dlistint_t` list.

* Prototype: `void free_dlistint(dlistint_t *head);`

File(s): [`4-free_dlistint.c`](./4-free_dlistint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e`

### :white_check_mark: 5. Get node at index
Write a function that returns the nth node of a `dlistint_t` linked list.

* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* where `index` is the index of the node, starting from 0
* if the `node` does not exist, return `NULL`

File(s): [`5-get_dnodeint.c`](./5-get_dnodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h`

### :white_check_mark: 6. Sum list
Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

* Prototype: `int sum_dlistint(dlistint_t *head);`
* if the list is empty, return 0

File(s): [`6-sum_dlistint.c`](./6-sum_dlistint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i`

### :white_check_mark: 7. Insert at index
Write a function that inserts a new node at a given position.

* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

File(s): [`7-insert_dnodeint.c`](./7-insert_dnodeint.c), [`2-add_dnodeint.c`](./2-add_dnodeint.c), [`3-add_dnodeint_end.c`](./)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j`

### :white_check_mark: 8. Delete at index
Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at 0
* Returns: 1 if it succeeded, -1 if it failed

File(s): [`8-delete_dnodeint.c`](./8-delete_dnodeint.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k`

## Advanced Tasks

### :white_large_square: 9. Crackme4
Find the password for [`crackme4`](https://github.com/holbertonschool/0x17.c).

* Save the password in the file `100-password`
* Your file should contain the exact password, no new line, no extra space
* Hint: The program prints “OK” when the password is correct

File(s): [`100-password`](./100-password)

### :white_check_mark: 10. Palindromes
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

* Save the result in the file `102-result`
* Your file should contain the exact result, no new line, no extra space

File(s): [`102-result`](./102-result)

### :white_large_square: 11. crackme5
Write a keygen for [`crackme5`](https://github.com/holbertonschool/0x17.c).

* Usage of the crackme: `./crackme5 username key`
* The crackme will segfault if you do not enter the correct key for the user
* Usage for your keygen: `./keygen5 username`
* Your keygen should print a valid key for the `username`

File(s): [`103-keygen.c`](./103-keygen.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
