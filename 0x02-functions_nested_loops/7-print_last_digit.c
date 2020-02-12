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
	int absol, last;

	if (n < 0)
		absol = (n * -1);
	else
		absol = n;

	last = absol % 10;

	_putchar(last + '0');
	return (absol % 10);
}
