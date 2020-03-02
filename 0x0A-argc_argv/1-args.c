#include <stdio.h>

/**
 * main - entry point, prints amount of arguments to program
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
 * Originally needed to express argc as pointer arithmetic due to
 * strictest gcc flags requiring 0 or 2 arguments to main(), and not
 * allowing an unused argument to main.
 * First cleared checks with:
 *	int n = (((argv + argc) - argv) - 1);
 *	printf("%d\n", n);
 *
 * Then remembered the introduction of how to void a variable, so:
 */
	(void)*argv;
	printf("%d\n", (argc - 1));
	return (0);
}
