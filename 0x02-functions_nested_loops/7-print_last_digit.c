#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number to be tested
 *
 * Return: value of last digit in int n
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num = num * -1;
	_putchar(num + '0');
	return (num);
}
