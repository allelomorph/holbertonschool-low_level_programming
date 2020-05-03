#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to first member of a dlistint_t list
 * Return: size_t amount of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nodes;

	for (nodes = 0; temp; nodes++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (nodes);
}
