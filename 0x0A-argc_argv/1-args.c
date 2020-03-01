#include <stdio.h>

/**
 * main - entry point, prints amount of arguments to program
 *
 * @argc: amount of cmd line arguments, starting at 0
 *
 * @argv: array of strings containing cmd line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
/*
 * Needed to express argc as pointer arithmetic due to strictest
 * gcc flags requiring 0 or 2 arguments to main(), and not allowing
 * an unused argument to main.
 *
 * Otherwise, simply argc would be enough:
 *      printf("%d\n", (argc - 1));
 */
	int n = (((argv + argc) - argv) - 1);

	printf("%d\n", n);
	return (0);
}
