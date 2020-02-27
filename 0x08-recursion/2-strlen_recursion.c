#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - measures a string using recursion,
 * rather than iteration as in _strlen
 *
 * @s: pointer to string to be measured
 *
 * Return: amount of bytes in string s
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return ((_strlen_recursion(s + 1)) + 1);
}
