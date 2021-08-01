# (221) 0x0A. C - argc, argv
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-28-2020 to 03-02-2020

### Description
Introduction to the argument count and argument vector to `main` in C.

### Requirements

### Provided file(s)
* [`_putchar.c`](./_putchar.c) originally [here](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)

---

## Mandatory Tasks

### :white_check_mark: 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

File(s): [`0-whatsmyname.c`](./0-whatsmyname.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis`

### :white_check_mark: 1. Silence is argument carried out by other means
Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

File(s): [`1-args.c`](./1-args.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs`

### :white_check_mark: 2. The best argument against democracy is a five-minute conversation with the average voter
Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

File(s): [`2-args.c`](./2-args.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args`

### :white_check_mark: 3. Neither irony nor sarcasm is argument
Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return 1

File(s): [`3-mul.c`](./3-mul.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul`

### :white_check_mark: 4. To infinity and beyond
Write a program that adds positive numbers.

* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return 1
* You can assume that numbers and the addition of all the numbers can be stored in an `int`

File(s): [`4-add.c`](./4-add.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add`

## Advanced Tasks

### :white_check_mark: 5. Minimal Number of Coins for Change
Write a program that prints the minimum number of coins to make change for an amount of money.

* Usage: `./change cents`
* where `cents` is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly 1, print `Error`, followed by a new line, and return 1
* you should use `atoi` to parse the parameter passed to your program
* If the number passed as the argument is negative, print 0, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

File(s): [`100-change.c`](./100-change.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
