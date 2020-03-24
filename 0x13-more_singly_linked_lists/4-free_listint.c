#include "lists.h"

/**
 * free_listint - frees memory previously allocated to
 * a struct list type listint_t
 *
 * @head: pointer to the first member of a singly linked list
 * of structs of type listint_s
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
/*
 * frees from begining of list. do recursive solutions
 * from end of list exist?
 */
	if (head)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
	else
		return;
}
