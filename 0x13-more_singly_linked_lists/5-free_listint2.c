#include "lists.h"

/**
 * free_listint2 - frees memory previously allocated to
 * a struct list type listint_t, also sets head to NULL
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
/*
 * frees from beginning of list. do recursive solutions
 * from end of list exist?
 */
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
/*	free(head); why does the example have 9 frees? */
}
