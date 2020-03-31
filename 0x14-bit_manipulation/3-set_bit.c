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
	long int temp_n;
	flag over_half = 0;

	if (index > 63 || !n)
		return (-1);

	if (*n >= (unsigned long int)LONG_MIN)
	{
		if (index == 63)
			return (1);

		*n -= (unsigned long int)LONG_MIN;
		over_half = 1;
	}

	temp_n = (long int)*n;
	temp_n = (temp_n | (1 << index));
	*n = (unsigned long int)temp_n;

	if (over_half)
		*n += (unsigned long int)LONG_MIN;

	return (1);
}
