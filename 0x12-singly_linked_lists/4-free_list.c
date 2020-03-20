#include "lists.h"

/**
 * free_list - frees memory allocated to a struct type
 * list_t linked list
 *
 * @head: pointer to first member of list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head != NULL)
	{
/* point to current head */
		temp = head;
/* current head moves one member forward in list */
		head = head->next;
/* free string and stuct ptr alloc for previous head */
		free(temp->str);
		free(temp);
	}
}
