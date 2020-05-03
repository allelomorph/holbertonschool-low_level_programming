#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at position 'index'
 *     of a dlistint_t linked list
 * @head: double pointer to first member of a dlistint_t list
 * @index: index position in list, starting with 0 at head
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *bef_cut, *aft_cut;
	unsigned int len, i;

	for (len = 0; temp; len++)
	{
		temp = temp->next;
	}

	if (index >= len || !*head)
	{
		return (-1);
	}
	else if (index == 0)
	{
		temp = *head;
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		free(temp);
/* reset *head to NULL after freeing single member list */
		if (*head == temp)
			*head = NULL;
	}
	else
	{
		temp = *head;
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
		bef_cut = temp->prev;
		aft_cut = temp->next;
		bef_cut->next = aft_cut;
		aft_cut->prev = bef_cut;
		free(temp);
	}
	return (1);
}
