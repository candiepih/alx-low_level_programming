#include "lists.h"

/**
 * pop_listint - removes the head of the linked list of listint_t
 * @head: first element of linked list of listint_t
 * Return: @head's node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (!*head)
		return (0);

	new_head = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = new_head;

	return (n);
}
