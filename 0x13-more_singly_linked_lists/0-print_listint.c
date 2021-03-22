#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: list of type listint_t
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	int i;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
