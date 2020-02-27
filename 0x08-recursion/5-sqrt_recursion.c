#include "holberton.h"
#include <stdio.h>

/**
 * find_sq - recursive helper of _sqrt_recursion, adds second variable to
 * increment guesses to compare against n
 *
 * @guess: sucessive candidates for square root of n
 *
 * @n: number to be checked for root
 *
 * Return: natural sqaure root of n, or -1 if none found
 */

int find_sq(int guess, int n)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (find_sq(guess + 1, n));
	else
		return (-1);
}

/**
 * _sqrt_recursion - finds natural square root of n through recursive helper
 *
 * @n: number to be checked
 *
 * Return: natural sqaure root of n, or -1 if none found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (find_sq(2, n));
}
