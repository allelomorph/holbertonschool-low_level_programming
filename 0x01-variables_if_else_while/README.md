# 0x01. C - Variables, if, else, while

## Description
What you should learn from this project:
  * What are the arithmetic operators and how to use them
  * What are the logical operators (sometimes called boolean operators) and how to use them
  * What the the relational operators and how to use them
  * What values are considered TRUE and FALSE in C
  * What are the boolean operators and how to use them
  * How to use the `if`, `if ... else` statements
  * How to use comments
  * How to declare variables of types `char`, `int`, `unsigned int`
  * How to assign values to variables
  * How to print the values of variables of type `char`, `int`, `unsigned int` with `printf`
  * How to use the `while` loop
  * How to use variables with the `while` loop
  * How to print variables using `printf`
  * What is the `ASCII` character set
  * What are the purpose of the `gcc` flags `-m32` and `-m64`

---

### [0. positive_or_negative](./0-positive_or_negative.c)
* This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
  * The variable n will store a different value every time you will run this program
  * You dont have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
  * The output of the program should be:
    * The number, followed by
      * if the number is greater than 0: `is positive`
      * if the number is 0: `is zero`
      * if the number is less than 0: `is negative`
    * followed by a new line


### [1. last_digit](./1-last_digit.c)
* This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
  * The variable n will store a different value every time you run this program
  * You dont have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
  * The output of the program should be:
    * The string `Last digit of`, followed by
    `n`, followed by
    * the string `is`, followed by
      * if the last digit of `n` is greater than 5: the string `and is greater than 5`
      * if the last digit of `n` is 0: the string `and is 0`
      * if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    * followed by a new line

### [2. print_alphabet](./2-print_alphabet.c)
* Write a program that prints the alphabet in lowercase, followed by a new line.
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code


### [3. print_alphabets](./3-print_alphabets.c)
* Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` three times in your code


### [4. print_alphabt](./4-print_alphabt.c)
* Write a program that prints the alphabet in lowercase, followed by a new line.
  * Print all the letters except `q` and `e`
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code


### [5. print_numbers](./5-print_numbers.c)
* Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.


### [6. print_numberz](./6-print_numberz.c)
* Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
  * You are not allowed to use any variable of type `char`
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code


### [7. print_tebahpla](./7-print_tebahpla.c)
* Write a program that prints the lowercase alphabet in reverse, followed by a new line.
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` twice in your code


### [8. print_base16](./8-print_base16.c)
* Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` three times in your code


### [9. print_comb](./9-print_comb.c)
* Write a program that prints all possible combinations of single-digit numbers.
  * Numbers must be separated by `,`, followed by a space
  * Numbers should be printed in ascending order
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` four times in your code
  * You are not allowed to use any variable of type `char`


### [10 print_comb2](./10-print_comb2.c)
* Write a program that prints the numbers from `00` to `99`.
  * Numbers must be separated by `,`, followed by a space
  * Numbers should be printed in ascending order, with two digits
  * You can only use the `putchar` function (every other function (`printf`, `puts`, etc) is forbidden)
  * All your code should be in the `main` function
  * You can only use `putchar` five times in your code
  * You are not allowed to use any variable of type `char`


### 11. print_comb3 `100-print_comb3.c` (not pushed yet)


### 12. print_comb4 `101-print_comb4.c` (not pushed yet)


### 13. print_comb5 `102-print_comb5.c` (not pushed yet)


---

## Author
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)