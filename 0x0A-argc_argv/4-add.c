#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point, adds multiple positive integers, prints "Error"
 * if any argument is not a postitive integer
 *
 * @argc: amount of cmd line arguments, starting with program
 * name itself
 *
 * @argv: array of strings containing cmd line arguments
 *
 * Return: 0 on sucess, 1 if any argument is not a positive integer
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
		printf("%d\n", sum);
		return (0);
}
