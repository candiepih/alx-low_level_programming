#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list.
 * @head: head of a listint_t linked list.
 * @index: index of the node finding starting from 0
 * Return: found node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	listint_t *node_found = NULL;
	int i = 0;

	while (tmp)
	{
		if (i == ((int)index))
		{
			node_found = tmp;
			break;
		}
		tmp = tmp->next;
		i++;
	}

	if (!node_found)
		return (NULL);

	return (node_found);
}
