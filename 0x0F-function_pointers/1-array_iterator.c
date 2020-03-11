#include "function_pointers.h"

/**
 * array_iterator - steps through array "array" of "size" members,
 * performing "action" function on each
 *
 * @array: int array to act on
 *
 * @size: amount of members in array
 *
 * @action: code executed for each member of "array"
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
