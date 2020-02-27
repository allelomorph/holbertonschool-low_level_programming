#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - measures a string using recursion,
 * rather than iteration as in _strlen. copied directly from
 * 0x08-recursion task 2
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

/**
 * pali_comp - recursive helper of is_palindrome, adds second
 * and third variable to increment from either end of string s
 *
 * @s: string to be checked for symmetry
 *
 * @i: index forward from beginning of string
 *
 * @j: index backward from end of string
 *
 * Return: 1 if string s is palindrome, or 0 if not
 */

int pali_comp(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (i >= j)
		return (1);
	else
		return (pali_comp(s, i + 1, j - 1));
}

/**
 * is_palindrome - tests if string s is a plaindrome through
 * a recursive helper
 *
 * @s: string to be checked for symmetry
 *
 * Return: 1 if s is palindrome, or 0 if not
 */

int is_palindrome(char *s)
{
	if (pali_comp(s, 0, (_strlen_recursion(s) - 1)))
		return (1);
	else
		return (0);
}
