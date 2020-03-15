#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of integers passed as args following n, to be totaled
 *
 * Return: sum of all unsigned int args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	va_end(args);
	return (total);
}
