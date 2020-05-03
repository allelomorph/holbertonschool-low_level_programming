#include "lists.h"

/**
 * free_dlistint - frees memory allocated to a dlistint_t list
 * @head: pointer to first member of a dlistint_t list
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
