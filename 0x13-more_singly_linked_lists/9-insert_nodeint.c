#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node into a listint_t linked list
 * at index position idx with n value
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @idx: index value of position in list, starting at 0
 *
 * @n: int value to be stored in new node at index idx
 *
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n;
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	temp = *head;
	new_n = malloc(sizeof(listint_t));
	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;

	if (idx == 0)
	{
		if (*head)
			new_n->next = temp;
		else
			new_n->next = NULL;

		*head = new_n;
		return (new_n);
	}
	else
	{
		for (i = 0; temp->next; i++)
		{
			if (i == (idx - 1))
			{
				new_n->next = temp->next;
				temp->next = new_n;
				return (new_n);
			}
			else
				temp = temp->next;
		}
	}

	free(new_n);
	return (NULL);
}
