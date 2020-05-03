#include "lists.h"

/**
 * sum_dlistint - returns the sum of all ints 'n' of a dlistint_t linked list
 * @head: pointer to first member of a dlistint_t list
 * Return: sum of all ints 'n', or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
