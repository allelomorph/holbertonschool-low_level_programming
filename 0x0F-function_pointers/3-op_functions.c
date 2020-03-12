#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2nd integer from 1st
 * @a: first integer
 * @b: second integer
 * Return:  a less b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 1st integer by 2nd
 * @a: first integer
 * @b: second integer
 * Return: a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of 1st int divided by 2nd
 * @a: first integer
 * @b: second integer
 * Return: a modulous b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
