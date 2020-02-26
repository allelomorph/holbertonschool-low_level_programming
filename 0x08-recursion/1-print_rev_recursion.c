#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string backwards using
 * recursion
 *
 * @s: pointer to beginning of string s
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
/*
 * 'base case', but actually highest frame on stack
 * once satified, it allows return of frame below
 */
	if (*s == 0)
	{
		return;
	}
/* recursively call function, it will create new frame on stack */
	_print_rev_recursion(s + 1);
/*
 * by putting the print command after the recursive call,
 * it will be executed as the stack collapses, thus
 * with the most additions of +1, ie the last char, first
 */
	_putchar(*s);
}
