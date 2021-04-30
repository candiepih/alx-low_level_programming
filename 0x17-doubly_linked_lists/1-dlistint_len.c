#include "lists.h"

/**
 * dlistint_len - gets the number of nodes in dlistint_t list
 * @h: first node to dlistint_t list
 * Return: length of dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
