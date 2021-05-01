#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at a certain index
 * @head: beginning of linked list
 * @index: index of node to find
 * Return: the node found at index or NULL if finding the node fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node;

	if (!head || (int)index < 0)
		return (NULL);

	current_node = head;
	while (current_node)
	{
		if (i == index)
			return (current_node);
		current_node = current_node->next;
		i++;
	}

	return (NULL);
}
