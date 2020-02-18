#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer to swap
 *
 * @b: second integer to swap
 *
 * return - void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
