#include "lists.h"

/**
 * free_listint - frees memory allocated to a linked listint_t list.
 * @head: head of a linekd listint_t list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head && (head->next != NULL))
		free_listint(head->next);
	free(head);
}
