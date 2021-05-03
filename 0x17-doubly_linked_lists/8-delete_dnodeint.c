#include "lists.h"

/**
 * remove_node_start - removes a node at start of list
 * @head: beginning of dlistint_t linked list
 * @current_node: the node at index 0
 * Return: (1) on Success (-1) of failure
 */

int remove_node_start(dlistint_t **head, dlistint_t *current_node)
{
	dlistint_t *tmp;
	if (!current_node->next)
	{
		free(current_node);
		*head = NULL;
		return (1);
	}
	else
	{
		tmp = current_node->next;
		free(current_node);
		tmp->prev = NULL;
		*head = tmp;
		return (1);
	}
	return (-1);
}
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

	if (!head || !(*head) || (int)index < 0)
		return (-1);

	current_node = *head;
	if ((int)index == 0)
		return (remove_node_start(head, current_node));

	while (current_node)
	{
		if (idx == index)
		{
			if (!current_node->next)
			{
				tmp = current_node;
				current_node->prev->next = NULL;
				free(tmp);
				return (1);
			}
			tmp = current_node;
			current_node->prev->next = current_node->next;
			current_node->next->prev = current_node->prev;
			free(tmp);
			return (1);
		}
		current_node = current_node->next;
		idx++;
	}

	return (-1);
}
