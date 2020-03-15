#include "variadic_functions.h"

/**
 * print_all - prints anything passed as an argument
 *
 * @format: list of types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;

	char *sep = "";

	p_forms pf_fmt[] = {
		{"c", (*print_char)},
		{"i", (*print_int)},
		{"f", (*print_float)},
		{"s", (*print_string)},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (pf_fmt[j].f_sym)
		{
			if (format[i] == *(pf_fmt[j].f_sym))
			{
				printf("%s", sep);
				pf_fmt[j].p_func(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - prints char passed as argument to variable list
 *
 * @args: variable args list passed from print_all
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints integer passed as an argument to variable list
 *
 * @args: variable args list passed from print_all
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints floating point passed as an argument to variable list
 *
 * @args: variable args list passed from print_all
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints string passed as an argument to variable list
 *
 * @args: variable args list passed from print_all
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}
