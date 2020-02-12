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
	int last;

	if (n < 0)
		last = -n;
	else
		last = n;

	_putchar((last % 10) + '0');
	return (last % 10);
}
