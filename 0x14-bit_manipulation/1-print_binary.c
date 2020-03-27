#include "holberton.h"

/**
 * print_binary - prints numeral in binary format
 *
 * @n: base 10 integer to be converted
 *
 */

void print_binary(unsigned long int n)
{
	int len, i;
	long int temp;

	if (n == 0)
		_putchar('0');

	if (n >= (unsigned long int)LONG_MIN)
	{
		n -= (unsigned long int)LONG_MIN;
		temp = (long int)n;
		_putchar('1');
		for (i = 62; i > -1; i--)
		{
			_putchar(((temp >> i) & 1) + '0');
		}
	}
	else
	{
		temp = (long int)n;
/* length of binary notation in chars, with leading zeroes truncated */
		for (len = 0; (temp >> len) | 0; len++)
		{}
/* minus 1 to match the way binary powers of 2 start at rightmost digit, 2^0 */
		len--;
/* start at leftmost digit to print left to right, and work backwards */
		for (; len > -1; len--)
		{
/* print n / 2^len. & 1 compares to ..0001 to just return that digit */
			_putchar(((temp >> len) & 1) + '0');
		}
	}
}
