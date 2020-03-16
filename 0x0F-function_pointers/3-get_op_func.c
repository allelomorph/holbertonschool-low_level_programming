#include "3-calc.h"

/**
 * get_op_func - selects the correct function from struct type op named
 * op_t to operate on two integers
 *
 * @s: operator passed as argument
 *
 * Return: pointer to operator function, or NULL if error
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
