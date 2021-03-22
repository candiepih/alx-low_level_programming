#include "lists.h"

/**
 * listint_len - gets the length of a linked listint_t list
 * @h: head to a linked listint_t list
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
