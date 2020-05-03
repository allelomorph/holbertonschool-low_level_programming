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

	if (!head || !*head)
		return (-1);

	for (len = 0; temp; len++)
		temp = temp->next;
	temp = *head;

	if (index >= len)
		return (-1);
	else if (index == 0)
	{
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		*head = temp->next;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
		bef_cut = temp->prev;
		aft_cut = temp->next;
		if (bef_cut)
			bef_cut->next = aft_cut;
		if (aft_cut)
			aft_cut->prev = bef_cut;
	}
	free(temp);
	return (1);
}
