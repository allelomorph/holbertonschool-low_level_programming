#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, multiplies two numbers, returns 1 and prints
 * "Error" if not receiving 2 arguments
 *
 * @argc: amount of cmd line arguments, starting with program name itself
 *
 * @argv: array of strings containing cmd line arguments
 *
 * Return: 0 on sucess, 1 if incorrect number of arguments
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", prod);
		return (0);
	}
}
