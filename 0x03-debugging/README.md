# (539) 0x03. C - Debugging
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Carrie Ybay

### Assignment dates
02-11-2020 to 02-12-2020

### Description
Introduction to debugging and troubleshooting C programs.

### Provided file(s)
* [`main.c`](./provided/main.c)
* [`main.h`](./provided/main.h)
* original [`1-main.c`](./provided/1-main.c)
* original [`2-largest_number.c`](./provided/2-largest_number.c)
* [`3-convert_day.c`](./provided/3-convert_day.c)
* original [`3-print_remaining_days.c`](./provided/3-print_remaining_days.c)
* [`2-main.c`](./tests/2-main.c)
* [`3-main_a.c`](./tests/3-main_a.c)

---

## Mandatory Tasks

### :white_check_mark: 0. Multiple mains
Based on [`main.c`](provided/main.c), create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of 0.

* You are not allowed to add or remove lines of code, you may change only one line in this task.

File(s): [`0-main.c`](./0-main.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main`

### :white_check_mark: 1. Like, comment, subscribe
Comment out (don’t delete) the part of the code in [`1-main.c`](provided/1-main.c) that is causing the output to go into an infinite loop.

* Don’t add or remove any lines of code. You are only allowed to comment out existing code.
* You do not have to compile with `-Wall -Werror -Wextra -pedantic` for this task.

File(s): [`1-main.c`](./1-main.c)\
Compiled: `gcc -std=gnu89 1-main.c -o 1-main`

### :white_check_mark: 2. 0 > 972?
Fix the code in [`2-largest_number.c`](provided/2-largest_number.c) so that it correctly prints out the largest of three numbers, no matter the case.

File(s): [`2-largest_number.c`](./2-largest_number.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main`

### :white_check_mark: 3. Leap year
Fix the `print_remaining_days()` function in [`3-print_remaining_days.c`](provided/3-print_remaining_days.c) so that the output works correctly for all dates and all leap years.

* You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
* You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

File(s): [`3-print_remaining_days.c`](./3-print_remaining_days.c)\
Compiled: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a`\
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
