#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of a dlistint_t list
 * Return: number of nodes in a dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
