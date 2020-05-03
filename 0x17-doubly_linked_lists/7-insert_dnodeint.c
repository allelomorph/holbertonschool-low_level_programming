#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 *     position in a linked dlistint_t list
 * @h: double pointer to first member of a dlistint_t list
 * @idx: index position in list, starting with 0 at head
 * @n: int value stored in new node
 * Return: address of the new node, or NULL if failed (inlcuding invalid idx)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int len, i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	for (len = 0; temp; len++)
	{
		temp = temp->next;
	}

	new->n = n;
	if (idx > len)
		return (NULL);
	else if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		temp = *h;
		for (i = 0; i < (idx - 1); i++)
		{
			temp = temp->next;
		}
		new->prev = temp;
		new->next = temp->next;
		if (temp->next)
			temp->next->prev = new;
		temp->next = new;
	}
	return (new);
}

/*	printf("len: %u\n", len); */

/*	printf("idx: %u, i: %u, temp->n: %d\n", idx, i, temp->n); */

/*	printf("after loop: idx: %u, i: %u, temp->n: %d\n", idx, i, temp->n); */
