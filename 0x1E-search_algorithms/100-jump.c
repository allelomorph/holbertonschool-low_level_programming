#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a, b;

	if (!array)
		return (-1);

	a = 0;
	b = sqrt(size);

	while (array[a] < value && a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		/* `|| ...` causes 'found' msg even when value not in array */
		if (array[b] >= value || b >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", a, b);
			break;
		}
		a = b;
		b = b + sqrt(size);
	}

	for (; a <= min(b, size - 1); a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
