#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 * @head: begining of dlistint_t list
 * @n: member value of dlistint_t list
 * Return: (NULL) on failure (new_node) on success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	if (!head)
		return (NULL);

	current_node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (!current_node)
	{
		new_node->n = (int)n;
		new_node->next = *head;
		new_node->prev = (NULL);
		*head = new_node;
		return (new_node);
	}

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;
	new_node->prev = current_node;
	new_node->next = NULL;
	new_node->n = (int)n;

	return (new_node);
}
