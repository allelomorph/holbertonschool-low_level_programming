#include "holberton.h"
#include <stdio.h>

/**
 * find_pr - recursive helper of is_prime_number, adds second variable
 * to increment factors to compare against n
 *
 * @div: sucessive candidates for factors of n
 *
 * @n: number to be checked for prime
 *
 * Return: 1 if n is prime, or 0 if not
 */

int find_pr(int div, int n)
{
	if (div == 1)
		return (1);
	else if (n % div == 0)
		return (0);
	else
		return (find_pr(div - 1, n));
}

/**
 * is_prime_number - tests if n is prime through a recursive helper
 *
 * @n: number to be checked for prime
 *
 * Return: 1 if n is prime, or 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (find_pr((n / 2), n));
}
