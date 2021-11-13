# (295) 0x1E. C - Search Algorithms
Foundations > Low-level programming & Algorithm > Data structures and Algorithms

---

### Project authors
Wilfried Hennuyer

### Assignment dates
08-25-2020 to 08-28-2020

### Description
Introduction to commonly used search algorithms.

### Requirements
* Only `printf` from the standard library is allowed
* Files containing big O notations will use this format:
  * `O(1)`
  * `O(n)`
  * `O(n!)`
  * n*m -> `O(nm)`
  * n squared -> `O(n^2)`
  * sqrt n -> `O(sqrt(n))`
  * log(n) -> `O(log(n))`
  * n * log(n) -> `O(nlog(n))`

### Provided file(s)
* definition of `listint_t` and `skiplist_t` for [`search_algos.h`](./search_algos.h)
* [create_list.c](./create_list.c) [free_list.c](./free_list.c) [print_list.c](./print_list.c)
* [create_skiplist.c](./create_skiplist.c) [free_skiplist.c](./free_skiplist.c) [print_skiplist.c](./print_skiplist.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c)
* [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c) [`102-main.c`](./tests/102-main.c) [`103-main.c`](./tests/103-main.c) [`104-main.c`](./tests/104-main.c) [`105-main.c`](./tests/105-main.c) [`106-main.c`](./tests/106-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Linear search
Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

* Prototype: `int linear_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And `value` is the value to search for
* Your function must return the first index where `value` is located
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

File(s): [`0-linear.c`](./0-linear.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear`

### :white_check_mark: 1. Binary search
Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

* Prototype: `int binary_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in array
* And `value` is the value to search for
* Your function must return the index where `value` is located
* You can assume that `array` will be sorted in ascending order
* You can assume that `value` won’t appear more than once in `array`
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

File(s): [`1-binary.c`](./1-binary.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary`

### :white_check_mark: 2. Big O #0
What is the *time complexity* (worst case) of a linear search in an array of size n?

File(s): [`2-O`](./2-O)

### :white_check_mark: 3. Big O #1
What is the *space complexity* (worst case) of an iterative linear search algorithm in an array of size n?

File(s): [`3-O`](./3-O)

### :white_check_mark: 4. Big O #2
What is the *time complexity* (worst case) of a binary search in an array of size n?

File(s): [`4-O`](./4-O)

### :white_check_mark: 5. Big O #3
What is the *space complexity* (worst case) of a binary search in an array of size n?

File(s): [`5-O`](./5-O)

### :white_check_mark: 6. Big O #4
What is the space complexity of this function / algorithm?
```C
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
    }
    return (map);
}
```

File(s): [`6-O`](./6-O)

## Advanced Tasks

### :white_check_mark: 7. Jump search
Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)

* Prototype: `int jump_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And `value` is the value to search for
* Your function must return the first index where `value` is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* You have to use the square root of the size of the array as the jump step.
* You can use the `sqrt()` function included in `<math.h>` (don’t forget to compile with `-lm`)
* Every time you compare a value in the array to the value you are searching for, you have to print this value

File(s): [`100-jump.c`](./100-jump.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump`

### :white_check_mark: 8. Big O #5
What is the *time complexity* (average case) of a jump search in an array of size n, using `step = sqrt(n)`?

File(s): [`101-O`](./101-O)

### :white_check_mark: 9. Interpolation search
Write a function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)

* Prototype: `int interpolation_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in array
* And `value` is the value to search for
* Your function must return the first index where `value` is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* To determine the probe position, you can use: `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))`
* Every time you compare a value in the array to the value you are searching, you have to print this value

File(s): [`102-interpolation.c`](./102-interpolation.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation`

### :white_check_mark: 10. Exponential search
Write a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

* Prototype: `int exponential_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And `value` is the value to search for
* Your function must return the first index where `value` is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* You have to use powers of 2 as exponential ranges to search in your array
* Every time you compare a value in the array to the value you are searching for, you have to print this value
* Once you’ve found the good range, you need to use a binary search:
* Every time you split the array, you have to print the new array (or subarray) you’re searching in

File(s): [`103-exponential.c`](./103-exponential.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential`

### :white_check_mark: 11. Advanced binary search
You may have noticed that the basic binary search does not necessarily return the index of the *first* value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

* Prototype: `int advanced_binary(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in array
* And `value` is the value to search for
* Your function must return the index where `value` is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return -1
* Every time you split the array, you have to print the new array (or subarray) you’re searching in
* You have to use recursion. You may only use one loop (`while`, `for`, `do while`, etc.) in order to print the array

File(s): [`104-advanced_binary.c`](./104-advanced_binary.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary`

### :white_large_square: 12. Jump search in a singly linked list
Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.

* Prototype: `listint_t *jump_list(listint_t *list, size_t size, int value);`
* Where `list` is a pointer to the head of the list to search in
* `size` is the number of nodes in `list`
* And `value` is the value to search for
* Your function must return a pointer to the first node where `value` is located
* You can assume that `list` will be sorted in ascending order
* If `value` is not present in `head` or if `head` is `NULL`, your function must return `NULL`
* You have to use the square root of the size of the list as the jump step.
* You can use the `sqrt()` function included in `<math.h>` (don’t forget to compile with `-lm`)
* Every time you compare a value in the list to the value you are searching, you have to print this value

File(s): [`105-jump_list.c`](./105-jump_list.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump`

### :white_check_mark: 13. Linear search in a skip list
As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an "express lane" to browse it. A linked list with an express lane is called a [skip list](https://en.wikipedia.org/wiki/Skip_list). This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as `sizeof(skiplist_t) > sizeof(listint_t)`.

Write a function that searches for a value in a sorted skip list of integers.

* Prototype: `skiplist_t *linear_skip(skiplist_t *list, int value);`
* Where `list` is a pointer to the head of the skip list to search in
* A node of the express lane is placed every index which is a multiple of the square root of the size of the list
* And `value` is the value to search for
* You can assume that `list` will be sorted in ascending order
* Your function must return a pointer on the first node where `value` is located
* If `value` is not present in `list` or if `head` is `NULL`, your function must return `NULL`
* Every time you compare a value in the list to the value you are searching, you have to print this value

File(s): [`103-exponential.c`](./103-exponential.c)\
Compiled: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential`

### :white_large_square: 14. Big O #6
What is the *time complexity* (average case) of a jump search in a singly linked list of size n, using `step = sqrt(n)`?

File(s): [`107-O`](./107-O)

### :white_large_square: 15. Big O #7
What is the *time complexity* (average case) of a jump search in a skip list of size n, with an express lane using `step = sqrt(n)`?

File(s): [`108-O`](./108-O)

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
