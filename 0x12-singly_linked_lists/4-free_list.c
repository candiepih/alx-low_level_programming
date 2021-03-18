#include "lists.h"

/**
 * free_list - frees nodes of linked list
 * @head: head of the linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
