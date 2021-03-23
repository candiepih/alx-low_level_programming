#include "lists.h"

/**
 * add_nodeint - adds a new node to a linked list of listint_t
 * @n: integer to assign to listint_t member
 * @head: head of list of listint_t
 * Return: new node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
