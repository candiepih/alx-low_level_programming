#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: beginning of our dlistint_t linked list
 * @index: position of the node to delete
 * Return: (1) on Success (-1) on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	dlistint_t *tmp;
	unsigned int idx = 0;

	if (!*head (int)index < 0)
		return (-1);

	current_node = *head;
	if ((int)index == 0)
	{
		if (!current_node->next)
		{
			free(current_node);
			*head = NULL;
			return (1);
		}
		tmp = current_node->next;
		free(current_node);
		tmp->prev = NULL;
		*head = tmp;
		return (1);
	}

	while (current_node)
	{
		if (idx == index)
		{
			tmp = current_node;
			current_node = current_node->prev;
			current_node->next = tmp->next;
			free(tmp);
			return (1);
		}
		current_node = current_node->next;
		idx++;
	}

	return (-1);
}
