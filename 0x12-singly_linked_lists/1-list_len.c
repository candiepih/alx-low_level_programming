#include "lists.h"

/**
 * list_len - counts the number of nodes in a linked list
 * @h: head of the linked list
 * Return: nodes count
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
