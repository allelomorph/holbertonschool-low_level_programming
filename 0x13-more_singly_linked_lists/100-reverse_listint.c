#include "lists.h"


/**
 * reverse_listint - reverses order of a listint_t singly linked list
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * Return: head of reversed list, or NULL if failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp;

	if (!head || !*head)
		return (NULL);

	while ((*head)->next)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = prev;
		prev = temp;
	}
	(*head)->next = prev;

	return (*head);
}
