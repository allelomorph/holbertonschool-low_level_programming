#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer to 2D int array
 *
 * @size: members of "square" 2d array, in either dimension
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_br = 0;
	int sum_bl = 0;
	int size_sq = size * size;

	for (i = 0; i < size_sq; i++)
	{
		if (i % (size + 1) == 0)
		{
/*			printf("br %i\n", a[i]);  */
			sum_br += a[i];
		}
		if (i % (size - 1) == 0 && (i > 0 && (i < (size_sq - 1))))
		{
/*			printf("bl %i\n", a[i]); */
			sum_bl += a[i];
		}
	}
	printf("%i, %i\n", sum_br, sum_bl);
}
