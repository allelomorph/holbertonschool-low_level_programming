#include "holberton.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 *
 * @n: pointer to integer to be searched
 *
 * @index: position in binary notation to retrieve. index in this case
 * counts from 0 at rightmost printed digit, or 2^0.
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = 0;
	long int temp_n;

	if (*n >= (unsigned long int)LONG_MIN)
	{
		if (index == 63)
		{
			*n -= (unsigned long int)LONG_MIN;
			return (1);
		}
	}
	temp_n = (long int)*n;

/* length of binary notation in chars, with leading zeroes truncated */
	for (; (temp_n >> len) | 0; len++)
	{}
/* minus 1 to match the way binary powers of 2 start at rightmost digit, 2^0 */
	len--;
	if (index > len)
		return (-1);

	if ((temp_n >> index) & 1)
	{
		temp_n -= 1 << index;
		*n = temp_n;
	}

	return (1);
}
