# (215) 0x04. C - More functions, more nested loops
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-13-2020 to 02-14-2020

### Description
Continued practice with functions, variables and nested loops.

### Requirements
* You are not allowed to use global variables
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* [`0-main.c`](./tests/0-main.c) [`1-main.c`](./tests/1-main.c) [`2-main.c`](./tests/2-main.c) [`3-main.c`](./tests/3-main.c) [`4-main.c`](./tests/4-main.c) [`5-main.c`](./tests/5-main.c) [`6-main.c`](./tests/6-main.c) [`7-main.c`](./tests/7-main.c) [`8-main.c`](./tests/8-main.c) [`10-main.c`](./tests/10-main.c) [`101-main.c`](./tests/101-main.c)

---

## Mandatory Tasks

### :white_check_mark: 0. isupper
Write a function that checks for uppercase character.

* Prototype: `int _isupper(int c);`
* Returns 1 if `c` is uppercase
* Returns 0 otherwise

File(s): [`0-isupper.c`](./0-isupper.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper`

### :white_check_mark: 1. isdigit
Write a function that checks for a digit (0 through 9).

* Prototype: `int _isdigit(int c);`
* Returns 1 if `c` is a digit
* Returns 0 otherwise

File(s): [`1-isdigit.c`](./1-isdigit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit`

### :white_check_mark: 2. Collaboration is multiplication
Write a function that multiplies two integers.

* Prototype: `int mul(int a, int b);`

File(s): [`2-mul.c`](./2-mul.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul`

### :white_check_mark: 3. The numbers speak for themselves
Write a function that prints the numbers, from 0 to 9, followed by a new line.

* Prototype: `void print_numbers(void);`
* You can only use `_putchar` twice in your code

File(s): [`3-print_numbers.c`](./3-print_numbers.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers`

### :white_check_mark: 4. I believe in numbers and signs
Write a function that prints the numbers, from 0 to 9, followed by a new line.

* Prototype: `void print_most_numbers(void);`
* Do not print 2 and 4
* You can only use `_putchar` twice in your code

File(s): [`4-print_most_numbers.c`](./4-print_most_numbers.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers`

### :white_check_mark: 5. Numbers constitute the only universal language
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

* Prototype: `void more_numbers(void);`
* You can only use `_putchar` three times in your code

File(s): [`5-more_numbers.c`](./5-more_numbers.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers`

### :white_check_mark: 6. The shortest distance between two points is a straight line
Write a function that draws a straight line in the terminal.

* Prototype: `void print_line(int n);`
* You can only use `_putchar` function to print
* Where `n` is the number of times the character `_` should be printed
* The line should end with a `\n`
* If `n` is 0 or less, the function should only print `\n`

File(s): [`6-print_line.c`](./6-print_line.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines`

### :white_check_mark: 7. I feel like I am diagonally parked in a parallel universe
Write a function that draws a diagonal line on the terminal.

* Prototype: `void print_diagonal(int n);`
* You can only use `_putchar` function to print
* Where `n` is the number of times the character `\` should be printed
* The diagonal should end with a `\n`
* If `n` is 0 or less, the function should only print a `\n`

File(s): [`7-print_diagonal.c`](./7-print_diagonal.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals`

### :white_check_mark: 8. You are so much sunshine in every square inch
Write a function that prints a square, followed by a new line.

* Prototype: `void print_square(int size);`
* You can only use `_putchar` function to print
* Where `size` is the size of the square
* If `size` is 0 or less, the function should print only a new line
* Use the character `#` to print the square

File(s): [`8-print_square.c`](./8-print_square.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares`

### :white_check_mark: 9. Fizz-Buzz
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

* Each number or word should be separated by a space
* You are allowed to use the standard library

File(s): [`9-fizz_buzz.c`](./9-fizz_buzz.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz`

### :white_check_mark: 10. Triangles
Write a function that prints a triangle, followed by a new line.

* Prototype: `void print_triangle(int size);`
* You can only use `_putchar` function to print
* Where `size` is the size of the triangle
* If `size` is 0 or less, the function should print only a new line
* Use the character `#` to print the triangle

File(s): [`10-print_triangle.c`](./10-print_triangle.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles`

## Advanced Tasks

### :white_large_square: 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

* You are allowed to use the standard library
* Your program will be linked to the glibc math library on compilation (`-lm`)

File(s): [`100-prime_factor.c`](./100-prime_factor.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

### :white_large_square: 12. Numbers have life; they're not just symbols on paper
Write a function that prints an integer.

* Prototype: `void print_number(int n);`
* You can only use `_putchar` function to print
* You are not allowed to use `long`
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values

File(s): [`101-print_number.c`](./101-print_number.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
