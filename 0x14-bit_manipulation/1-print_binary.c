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
/*	printf("len: %d\n", len); */
	len--;
	for (i = 0; b[i]; i++, len--)
	{
/*		printf("loop at index: %i b[i]: %c\n", len, b[i]); */
		if (b[i] == '1')
		{
			/*	printf("bin at top of loop:"); 
			b_print(bin); 
				bprint(2^(b[(len - i)]
			printf("pow 2 : %i, %i \n", len, (1 << len)); */
			bin += 1 << len;
			continue;
		}
		else if (b[i] == '0')
		{
			continue;
		}
		else
			return (0);
	}
/*	printf("str : %s\n", b);
	printf("bin : ");
	b_print(bin);
	putchar('\n'); */
	return (bin);
}
