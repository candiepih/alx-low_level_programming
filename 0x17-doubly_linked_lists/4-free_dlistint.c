#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: beginning of dlistint_t linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
