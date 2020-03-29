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
	long int temp_n;
	int over_half = 0;

	if (index > 63 || !n)
		return (-1);

	if (*n >= (unsigned long int)LONG_MIN)
	{
		*n -= (unsigned long int)LONG_MIN;
		if (index == 63)
			return (1);

		over_half = 1;
	}

	temp_n = (long int)*n;
	if ((temp_n >> index) & 1)
	{
		temp_n -= 1 << index;
		*n = temp_n;
	}
	*n = (unsigned long int)temp_n;

	if (over_half)
		*n += (unsigned long int)LONG_MIN;

	return (1);
}
