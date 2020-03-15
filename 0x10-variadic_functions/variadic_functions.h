#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct print_formats - Struct p_forms
 *
 * @f_sym: format symbol given to main
 * @p_func: pointer to corresponding helper function
 */

typedef struct print_formats
{
	char *f_sym;
	void (*p_func)(va_list);
} p_forms;

void print_char(va_list args);

void print_int(va_list args);

void print_float(va_list args);

void print_string(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
