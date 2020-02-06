#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 to complete
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* first check if positive */
	if (n > 0)
	{
		printf("%iis positive\n", n);
	}
/* if not, determine whether negative or zero */
	else
	{
		if (n < 0)
		{
/* check if negative */
			printf("%iis negative\n", n);
		}
		else
		{
			printf("%iis zero\n", n);
		}
	}
	return (0);
}
