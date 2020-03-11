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
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
