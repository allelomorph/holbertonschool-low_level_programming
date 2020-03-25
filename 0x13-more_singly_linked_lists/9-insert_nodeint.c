#include "lists.h"

/**
 * listint_len - counts all the elements of a struct list type listint_t
 *
 * @h: pointer to the head/first member of a singly linked list of structs
 * of type listint_s
 *
 * Return: amount of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		if (h->next)
			count += listint_len(h->next);

		return (count);
	}
	else
		return (0);
}

/**
 * add_nodeint - adds a new node to the start of a struct list type listint_t
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * @n: int to store in n member of new listint_s struct
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}

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
/* can it be done with less helpers? try refactoring later */
	size_t list_len;
	listint_t *new_n;
	listint_t *temp = *head;
	unsigned int i;

	if (!head)
		return (NULL);

	list_len = listint_len(*head);

	if (idx > list_len)
		return (NULL);

	if (idx == list_len)
		return (add_nodeint_end(head, n));

	if (idx == 0)
		return (add_nodeint(head, n));

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
		return (NULL);

	if (!*head)
	{
		free(new_n);
		return (NULL);
	}
	for (i = 0; (i < (idx - 1)); i++)
	{
		temp = temp->next;
	}
	new_n->n = n;
	new_n->next = temp->next;
	temp->next = new_n;
	return (new_n);
}
