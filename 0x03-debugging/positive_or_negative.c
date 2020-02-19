#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - determines whther positive or negative
 *
 * @n: number to be tested
 *
 * Return: none
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* first check if positive */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
/* if not, determine whether negative or zero */
	else
	{
		if (n < 0)
		{
/* check if negative */
			printf("%i is negative\n", n);
		}
		else
		{
			printf("%i is zero\n", n);
		}
	}
}
