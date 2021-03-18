#include "lists.h"

/**
 * print_list - Prints all the elements of the linked list
 * @h: Head of the linked list
 * Return: Number of elements in the list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
