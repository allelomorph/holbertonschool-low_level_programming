#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to first member of a dlistint_t list
 * @n: int value stored in new node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	tail = *head;
	if (!tail)
		*head = new;
	else
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}

	new->n = n;
	new->prev = tail;
	new->next = NULL;

	return (new);
}
