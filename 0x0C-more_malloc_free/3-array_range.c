#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers, which contains
 * min and max, plus all the values between them, in order
 *
 * @min: lowest int value in array
 *
 * @max: highest in value in array
 *
 * Return: pointer to the created int array, NULL if either
 * min is greater than max, or if malloc fails
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ((max - min) + 1); i++)
		arr[i] = (min + i);

	return (arr);
}
