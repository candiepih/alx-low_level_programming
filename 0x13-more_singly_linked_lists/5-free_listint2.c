#include "lists.h"

/**
 * free_listint2 - frees a linked list of listint_t
 * @head: head of linked list of listint_t
 * Description: finally sets the head to NULL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *current_node;

	while (tmp)
	{
		current_node = tmp->next;
		free(tmp);
		tmp = current_node;
	}
	*head = NULL;
}
