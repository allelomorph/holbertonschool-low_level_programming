#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char in a string
 *
 * @s: pointer to a pointer to string s
 *
 * @to: char pointer
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
