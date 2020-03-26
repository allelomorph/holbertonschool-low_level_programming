#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: char string of digits to be converted
 *
 * Return: converted value as unsigned int, or 0 if any char in string
 * is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int bin = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{}

	len--;
	for (i = 0; b[i]; i++, len--)
	{
		if (b[i] == '1')
		{
			bin += 1 << len;
			continue;
		}
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}

	return (bin);
}
