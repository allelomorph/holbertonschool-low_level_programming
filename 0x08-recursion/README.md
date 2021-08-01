# (219) 0x08. C - Recursion
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-26-2020 to 02-27-2020

### Description
Introduction to recursion.

### Requirements
* You are not allowed to use global variables
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`100-main.c`](./tests/100-main.c) [`101-main.c`](./tests/101-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.

* Prototype: `void _puts_recursion(char *s);`

File(s): [`0-puts_recursion.c`](./0-puts_recursion.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion`

### :white_check_mark: 1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.

* Prototype: `void _print_rev_recursion(char *s);`

File(s): [`1-print_rev_recursion.c`](./1-print_rev_recursion.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion`

### :white_check_mark: 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.

* Prototype: `int _strlen_recursion(char *s);`

File(s): [`2-strlen_recursion.c`](./2-strlen_recursion.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion`

### :white_check_mark: 3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.

* Prototype: `int factorial(int n);`
* If `n` is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1

File(s): [`3-factorial.c`](./3-factorial.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial`

### :white_check_mark: 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of `x` raised to the power of `y`.

* Prototype: `int _pow_recursion(int x, int y);`
* If `y` is lower than 0, the function should return -1

File(s): [`4-pow_recursion.c`](./4-pow_recursion.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow`

### :white_check_mark: 5. Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number.

* Prototype: `int _sqrt_recursion(int n);`
* If `n` does not have a natural square root, the function should return -1

File(s): [`5-sqrt_recursion.c`](./5-sqrt_recursion.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt`

### :white_check_mark: 6. Inception. Is it possible?
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

* Prototype: `int is_prime_number(int n);`

File(s): [`6-is_prime_number.c`](./6-is_prime_number.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime`

## Advanced Tasks

### :white_check_mark: 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
Write a function that returns 1 if a string is a palindrome and 0 if not.

* Prototype: `int is_palindrome(char *s);`
* An empty string is a palindrome

File(s): [`100-is_palindrome.c`](./100-is_palindrome.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome`

### :white_large_square: 8. Inception. Now, before you bother telling me it's impossible...
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

* Prototype: `int wildcmp(char *s1, char *s2);`
* `s2` can contain the special character `*`.
* The special char `*` can replace any string (including an empty string)

File(s): [`101-wildcmp.c`](./101-wildcmp.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
