#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to first member of a dlistint_t list
 * Return: size_t amount of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nodes;

	for (nodes = 0; temp; nodes++)
	{
		temp = temp->next;
	}
	return (nodes);
}
