#include "function_pointers.h"

/**
 * print_name - applies name printing function f to string name
 *
 * @name: string containing name
 *
 * @f: pointer to function that formats and prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	else
		return;
}
