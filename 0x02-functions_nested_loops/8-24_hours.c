#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h_10, h_1, s_10, s_1;

	for (h_10 = '0'; h_10 < '3'; h_10++)
	{
		for (h_1 = '0'; h_1 < ('9' + 1); h_1++)
		{
			if ((h_1 > '3') && (h_10 == '2'))
				break;
			for (s_10 = '0'; s_10 < '6'; s_10++)
			{
				for (s_1 = '0'; s_1 < ('9' + 1); s_1++)
				{
					_putchar(h_10);
					_putchar(h_1);
					_putchar(':');
					_putchar(s_10);
					_putchar(s_1);
					_putchar('\n');
				}
				if ((h_1 > '3') && (h_10 == '2'))
					break;
			}
			if ((h_1 > '3') && (h_10 == '2'))
				break;
		}
		if ((h_1 > '3') && (h_10 == '2'))
			break;
	}
}
