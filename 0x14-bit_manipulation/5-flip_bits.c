#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * change the binary notation of one number to another.
 *
 * @n: first integer to be compared
 *
 * @m: second integer to be compared
 *
 * Return: amount of bits that differ between the two values
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	long int temp_n, temp_m;
	long int diff;

	if (n >= (unsigned long int)LONG_MIN)
	{
		n -= (unsigned long int)LONG_MIN;
		if (m >= (unsigned long int)LONG_MIN)
		{
			m -= (unsigned long int)LONG_MIN;
		}
		else
			count++;
	}

	temp_n = (long int)n;
	temp_m = (long int)m;
	diff = temp_n ^ temp_m;

	for (i = 0; i < 63; i++)
	{
		if ((diff >> i) & 1)
			count++;
	}

	return (count);
}
