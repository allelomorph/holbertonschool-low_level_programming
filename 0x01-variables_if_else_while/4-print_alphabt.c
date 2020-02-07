#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 to complete
 */
int main(void)
{
	int i;
	char c;

	for (i = 97; i < 123; i++)
	{
		if (i == 101)
		{
			i += 1;
		}
		if (i == 113)
		{
			i += 1;
		}
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
