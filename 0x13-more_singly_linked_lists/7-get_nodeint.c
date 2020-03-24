#include "lists.h"

/**
 * get_nodeint_at_index - returns address of 'index'th member of
 * a struct list type listint_t
 *
 * @head: pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @index: index of node in list, starting at 0
 *
 * Return: address of 'index'th node of listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head->next; i++)
	{
		if (i == index)
			return (temp);

		temp = temp->next;
	}
	return (NULL);
}
