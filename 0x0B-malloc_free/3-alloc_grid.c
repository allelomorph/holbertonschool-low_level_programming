#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers.
 *
 * @width: amount of members of of each array that is a member
 * of height, also amount of values printed in each row
 *
 * @height: amount of arrays arrayed to int**, also amount of
 * values printed in each column
 *
 * Return: pointer to a 2 dimensional array of integers,
 * or NULL if either width or height is < 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int k;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);
/* allocate space for array of height number single pointers */
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

/* allocate space for height number arrays of width number members each */
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
/* if any 2nd dimension allocation returns an error, avoid memory leak */
			for (k = 0; k < i; k++)
			{
/* by freeing up memory allocated in any previous step for dimension height */
				free(p[k]);
			}
/* then freeing the height-sized array of pointers in the second dimension */
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
