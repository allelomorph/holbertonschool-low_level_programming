#include "holberton.h"

/**
 * _isalpha - checks for alphnumeric character.
 *
 * @c: character to be tested
 *
 * Return: 1 if alphanumeric, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z') ||
	    (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
