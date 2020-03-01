#include <stdio.h>

/**
 * main - entry point, prints all arguments it receives
 *
 * @argc: amount of cmd line arguments, starting with program name itself
 *
 * @argv: array of strings containing cmd line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
/*
 * Done iteratively here. Is recursion possible if argc and argv
 * wouldn't be taking from standard input on future stack frames?
 */
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
