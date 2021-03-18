#include "lists.h"
/**
 * print_list - Prints all the elements of the linked list
 * @h: Head of the linked list
 * Return: Number of elements in the list
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
