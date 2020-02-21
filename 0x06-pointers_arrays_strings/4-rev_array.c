#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses elements in non-string arrays
 *
 * @a: pointer to first element in array
 *
 * @n: number of elements in array to reverse
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int temp;

/* starting at end of array and deincrementing down to halfway */
	for (i = (n - 1); i >= (n / 2); i--, j++)
	{
/* similar to string reverse, using temp variable to swap */
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
