#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 to complete
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			putchar(i);
			putchar(n);
			if ((i + n) < 114)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
