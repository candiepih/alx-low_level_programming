#include "lists.h"

/**
 * add_nodeint_end - adding a new node at the end of list
 * of listint_t
 * @head: head of list of listint_t
 * @n: integer to assign to member n of listint_t
 * Return: new node created
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;

	}

	return (new_node);
}
