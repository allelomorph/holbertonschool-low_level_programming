#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to be searched
 *
 * @size: amount of elements in "array"
 *
 * @cmp: pointer to function that compares values
 *
 * Return: index value of first matching element in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
