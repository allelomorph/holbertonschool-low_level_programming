#include "holberton.h"
#include <stdio.h>

/**
 * factorial - finds factorial of int n.
 * if n is less than 0, return -1 for error
 *
 * @n: base number to derive factorial
 *
 * Return: factorial of n, or -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
