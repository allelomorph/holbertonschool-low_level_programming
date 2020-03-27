#include "holberton.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 *
 * @n: pointer to integer to be searched
 *
 * @index: position in binary notation to modify. index in this case
 * counts from 0 at rightmost printed digit, or 2^0.
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int len = 0;
	long int temp_n;

	if (*n >= (unsigned long int)LONG_MIN)
	{
		if (index == 63)
			return (1);

		len++;
		*n -= (unsigned long int)LONG_MIN;
	}
	temp_n = (long int)*n;

/* length of binary notation in chars, with leading zeroes truncated */
	for (; (temp_n >> len) | 0; len++)
	{}
/* minus 1 to match the way binary powers of 2 start at rightmost digit, 2^0 */
	len--;
	if (index > (unsigned int)len)
		return (-1);

	temp_n = (temp_n | (1 << index));
	*n = (unsigned long int)temp_n;

	return (1);
}
