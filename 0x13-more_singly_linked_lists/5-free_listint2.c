#include "lists.h"

/**
 * free_listint2 - frees a linked list of listint_t
 * @head: head of linked list of listint_t
 * Description: finally sets the head to NULL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (*head && ((*head)->next != NULL))
		free_listint2((&(*head)->next));
	free(*head);
	head = NULL;
}
