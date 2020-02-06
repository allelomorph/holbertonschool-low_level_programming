#include <stdlib.h>
#include <time.h>

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
	/* first check if zero */
	if (n = 0)
	{
		printf("%d is zero", n);
		/* if not, determine whether pos or neg */
		else
		{
			if (n > 0)
			{
				/* check if positive */
				printf("%d is positive", n);
				else
				{
					printf("%d is negative", n);
				}
			}
		}
	}
	return (0);
}
