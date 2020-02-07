#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 to complete
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i + 0);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i + 0);
	}
	putchar('\n');
	return (0);
}
