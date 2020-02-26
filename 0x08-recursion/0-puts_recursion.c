#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string using recursion, rather
 * than iteration as in _puts
 *
 * @s: pointer to beginning of string s
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{	_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
