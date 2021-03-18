#include "lists.h"

/**
 * free_list - frees nodes of linked list
 * @head: head of the linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		if (head->str)
		{
			free(head->str);
		}
		free(tmp);
	}
	free(head);
}
