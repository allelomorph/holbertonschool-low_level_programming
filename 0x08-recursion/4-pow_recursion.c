#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns value of x to the power of y
 *
 * @x: base
 *
 * @y: exponent
 *
 * Return: x to the yth power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
