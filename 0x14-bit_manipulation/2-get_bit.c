#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: integer to be searched
 *
 * @index: position in binary notation to retrieve. index in this case
 * counts from 0 at rightmost printed digit, or 2^0.
 *
 * Return: integer value of bianry digit at position "index"
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int len = 0;
	long int temp_n;

	if (n >= (unsigned long int)LONG_MIN)
	{
		if (index == 63)
			return (1);

		len++;
		n -= (unsigned long int)LONG_MIN;
	}
	temp_n = (long int)n;

/* length of binary notation in chars, with leading zeroes truncated */
	for (; (temp_n >> len) | 0; len++)
	{}
/* minus 1 to match the way binary powers of 2 start at rightmost digit, 2^0 */
	len--;
	if (index > 63)
		return (-1);
	else if (index > (unsigned int)len)
		return (0);

	return ((temp_n >> index) & 1);
}
