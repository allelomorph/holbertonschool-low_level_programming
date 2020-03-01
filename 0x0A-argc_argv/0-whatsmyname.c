#include <stdio.h>

/**
 * main - entry point, prints file name of program
 *
 * @argc: amount of cmd line arguments, starting at 0 for program
 * name itself
 *
 * @argv: array of strings containing cmd line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
