#include "lists.h"

/**
 * print_list - prints all the elements of a struct type list_t list
 *
 * @h: pointer to the first member of a singly linked list of structs
 * of type list_t
 *
 * Return: amount of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 1;

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	if (h->next)
		count += print_list(h->next);

	return (count);
}
