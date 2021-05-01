#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of slistint_t list
 * @head: begining of dlistint_t list
 * @n: dlistint_t member integer value
 * Return: new_node created or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->next = *head;
	new_node->prev = (NULL);
	*head = new_node;

	return (new_node);
}
