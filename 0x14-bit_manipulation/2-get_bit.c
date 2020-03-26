#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer to be searched
 *
 * @index: position in binary notation to retrieve. index in this case
 * counts from 0 at rightmost printed digit, or 2^0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int len = 0;

	if (n == ULONG_MAX)
	{
		if (index != 63)
		{
			len++;
			n = LONG_MAX;
		}
		else
			return (1);
	}

/* length of binary notation in chars, with leading zeroes truncated */
	for (; (n >> len) | 0; len++)
	{}
/* minus 1 to match the way binary powers of 2 start at rightmost digit, 2^0 */
	len--;
	if (index > (unsigned int)len)
		return (-1);

	return ((n >> index) & 1);
}
