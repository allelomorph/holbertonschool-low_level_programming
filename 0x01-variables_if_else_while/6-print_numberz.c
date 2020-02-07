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

	for (i = 48; i < 58; i++)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
