# (253) 0x1A. C - Hash tables
Foundations > Low-level programming & Algorithm > Data structures and Algorithms

---

### Project authors
Julien Barbier

### Assignment dates
05-28-2020 to 05-30-2020

### Description
Introduction to hash functions, hash tables, and their use cases.

### Requirements

### Provided file(s)
* definitions of `hash_node_t`, `hash_table_t`, `shash_node_t`, and `shash_table_t` for `hash_tables.h`
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`tests/5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`100-main.c`](./tests/100-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. >>> ht = {}
Write a function that creates a hash table.

* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
    * where `size` is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return `NULL`

File(s): [`0-hash_table_create.c`](./0-hash_table_create.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a`

### :white_check_mark: 1. djb2
Write a hash function implementing the djb2 algorithm.

* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
* You are allowed to copy and use [this function](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

File(s): [`1-djb2.c`](./1-djb2.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b`

### :white_check_mark: 2. key -> index
Write a function that gives you the index of a key.

* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
    * where `key` is the key
    * and `size` is the size of the array of the hash table
* This function should use the `hash_djb2` function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks

File(s): [`2-key_index.c`](./2-key_index.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c`

### :white_check_mark: 3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.

* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
    * Where `ht` is the hash table you want to add or update the key/value to
    * `key` is the key. `key` can not be an empty string
    * and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
* Returns: 1 if it succeeded, 0 otherwise
* In case of collision, add the new node at the beginning of the list

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:

* **hetairas** collides with **mentioner**
* **heliotropes** collides with **neurospora**
* **depravement** collides with **serafins**
* **stylist** collides with **subgenera**
* **joyful** collides with **synaphea**
* **redescribed** collides with **urites**
* **dram** collides with **vivency**

File(s): [`3-hash_table_set.c`](./3-hash_table_set.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d`

### :white_check_mark: 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.

* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
    * where `ht` is the hash table you want to look into
    * and `key` is the key you are looking for
* Returns the value associated with the element, or `NULL` if `key` couldn’t be found

File(s): [`4-hash_table_get.c`](./4-hash_table_get.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e`

### :white_check_mark: 5. >>> print(ht)
Write a function that prints a hash table.

* Prototype: `void hash_table_print(const hash_table_t *ht);`
    * where `ht` is the hash table
* You should print the key/value in the order that they appear in the array of hash table
    * Order: array, list
* If `ht` is NULL, don’t print anything

File(s): [`5-hash_table_print.c`](./5-hash_table_print.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f`

### :white_check_mark: 6. >>> del ht
Write a function that deletes a hash table.

* Prototype: `void hash_table_delete(hash_table_t *ht);`
    * where `ht` is the hash table

File(s): [`6-hash_table_delete.c`](./6-hash_table_delete.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g`

## Advanced Tasks

### :white_check_mark: 7. $ht['Betty'] = 'Cool'
In PHP, hash tables are ordered. How is this even possible?\
\
For this task, please:

* Read [PHP Internals Book: HashTable](https://www.phpinternalsbook.com/php5/hashtables/basic_structure.html)
* Use the same hash function
* Use the provided data structures `shash_node_t` and `shash_table_t`

Rewrite the previous functions using these data structures:

* `shash_table_t *shash_table_create(unsigned long int size);`
* `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
    * The key/value pair should be inserted in the sorted list at the right place
    * Note that here we do not want to do exactly like `PHP`: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
* `char *shash_table_get(const shash_table_t *ht, const char *key);`
* `void shash_table_print(const shash_table_t *ht);`
    * Should print the hash table using the sorted linked list
* `void shash_table_print_rev(const shash_table_t *ht);`
    * Should print the hash tables key/value pairs in reverse order using the sorted linked list
* `void shash_table_delete(shash_table_t *ht);`
* You are allowed to have more than 5 functions in your file

File(s): [`100-sorted_hash_table.c`](./100-sorted_hash_table.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
