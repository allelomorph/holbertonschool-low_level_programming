#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: number to be measured
 *
 * Return: the absolute value of the integer
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
