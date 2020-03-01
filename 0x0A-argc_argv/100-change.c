#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints mininum amount of coins needed,
 * prints error if too many arguments, 0 if negative number given
 *
 * @argc: amount of cmd line arguments, starting with program
 * name itself
 *
 * @argv: array of strings containing cmd line arguments
 *
 * Return: 0 if amount given is positive or negative integer, 1 if
 * incorrect number of arguments
 */

int main(int argc, char *argv[])
{
	int i;
	int change;
	int min_coins = 0;
/* note that the European 2-cent coin is named in instructions */
	int denom[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			min_coins += (change / denom[i]);
			change -= ((change / denom[i]) * denom[i]);
		}
	}
	printf("%d\n", min_coins);
	return (0);
}
