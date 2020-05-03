#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to first member of a dlistint_t list
 * @index: index position of node, starting with 0 at head
 * Return: pointer to node at index 'index', NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	for (i = 0; temp && (i < index); i++)
	{
		temp = temp->next;
	}

	return (temp);
}
