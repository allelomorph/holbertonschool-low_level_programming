# (213) 0x01. C - Variables, if, else, while
Foundations > Low-level programming & Algorithm > Hatching out

---

### Project author
Julien Barbier

### Assignment dates
02-06-2020 to 02-07-2020

### Description
Introduction to basic C syntax, including loops, variables, and conditionals.

### Provided file(s)
* [`0-positive_or_negative_c`](./0-positive_or_negative_c) originally [here](./https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* [`1-last_digit_c`](./1-last_digit_c) originally [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)

---

## Mandatory Tasks

### :white_check_mark: 0. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
* The variable `n` will store a different value every time you will run this program
* You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
* The output of the program should be:
    * The number, followed by
        * if the number is greater than 0: `is positive`
        * if the number is 0: `is zero`
        * if the number is less than 0: `is negative`
    * followed by a new line

File(s): [`0-positive_or_negative.c`](./0-positive_or_negative.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative`

### :white_check_mark: 1. The last digit
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

* You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
* The variable `n` will store a different value every time you run this program
* You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
* The output of the program should be:
    * The string `Last digit of`, followed by
    * `n`, followed by
    * the string `is`, followed by
        * if the last digit of `n` is greater than 5: the `string and is greater than 5`
        * if the last digit of `n` is 0: the string `and is 0`
        * if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    * followed by a new line

File(s): [`1-last_digit.c`](./1-last_digit.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit`

### :white_check_mark: 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

File(s): [`2-print_alphabet.c`](./2-print_alphabet.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet`

### :white_check_mark: 3. alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

File(s): [`3-print_alphabets.c`](./3-print_alphabets.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets`

### :white_check_mark: 4. When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except `q` and `e`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

File(s): [`4-print_alphabt.c`](./4-print_alphabt.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt`

### :white_check_mark: 5. Numbers
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* All your code should be in the `main` function

File(s): [`5-print_numbers.c`](./5-print_numbers.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers`

### :white_check_mark: 6. Numberz
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* You are not allowed to use any variable of type `char`
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` twice in your code
* All your code should be in the `main` function

File(s): [`6-print_numberz.c`](./6-print_numberz.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz`

### :white_check_mark: 7. Smile in the mirror
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

File(s): [`7-print_tebahpla.c`](./7-print_tebahpla.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla`

### :white_check_mark: 8. Hexadecimal
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

File(s): [`8-print_base16.c`](./8-print_base16.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16`

### :white_check_mark: 9. Patience, persistence and perspiration make an unbeatable combination for success
Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by `,`, followed by a space
* Numbers should be printed in ascending order
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* All your code should be in the `main` function
* You can only use `putchar` four times maximum in your code
* You are not allowed to use any variable of type `char`

File(s): [`9-print_comb.c`](./9-print_comb.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb`

## Advanced Tasks

### :white_large_square: 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
Write a program that prints all possible different combinations of two digits.

* Numbers must be separated by `,`, followed by a space
* The two digits must be different
* `01` and `10` are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` five times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

File(s): [`100-print_comb3.c`](./100-print_comb3.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3`

### :white_large_square: 11. The success combination in business is: Do what you do better... and: do more of what you do...
Write a program that prints all possible different combinations of three digits.

* Numbers must be separated by `,`, followed by a space
* The three digits must be different
* `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits 0, 1 and 2
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` six times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

File(s): [`101-print_comb4.c`](./101-print_comb4.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4`

### :white_large_square: 12. Software is eating the World
Write a program that prints all possible combinations of two two-digit numbers.

* The numbers should range from 0 to 99
* The two numbers should be separated by a space
* All numbers should be printed with two digits. 1 should be printed as `01`
* The combination of numbers must be separated by comma, followed by a space
* The combinations of numbers should be printed in ascending order
* `00 01` and `01 00` are considered as the same combination of the numbers 0 and 1
* You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
* You can only use `putchar` eight times maximum in your code
* You are not allowed to use any variable of type `char`
* All your code should be in the `main` function

File(s): [`102-print_comb5.c`](./102-print_comb5.c)\
Compiled: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5`

---

## Student
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)
