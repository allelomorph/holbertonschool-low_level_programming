#include "variadic_functions.h"

/**
 * print_strings - prints strings passed as args, follwed by newline
 *
 * @separator: string to be pritned in between arg strings
 *
 * @n: number of arg strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *temp;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
/*
 * since we can't invoke va_args, even for a truth test,
 * without advancing through va_list, we use insulator ptr temp
 */
		temp = va_arg(args, char *);

		if (temp)
			printf("%s", temp);
		else
			printf("(nil)");

		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
