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

	for (i = 122; i > 96; i--)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
