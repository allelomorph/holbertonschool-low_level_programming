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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* divide n and take remainder */
	lastDigit = n % 10;
/* print first segment of string */
	printf("Last digit of %i is %i ", n, lastDigit);
/* is lastDigit more than 5? */
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
/* if not, determine whether zero */
	else
	{
		if (lastDigit == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and is less than 6 and not 0\n");
		}
	}
	return (0);
}
