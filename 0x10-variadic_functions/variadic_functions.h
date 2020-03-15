#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_formats - Struct p_forms
 *
 * @f_sym: format symbol given to main
 * @pf_tag: format tag passed as string to printf
 * @p_func: pointer to corresponding helper function
 */
typedef struct print_formats
{
	char f_sym;
	char *pf_tag;
	void (*p_func)(va_list);
} p_forms;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
