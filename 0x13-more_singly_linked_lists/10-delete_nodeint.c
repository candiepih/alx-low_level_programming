#include "lists.h"

/**
 * delete_nodeint_at_index - delets a node at a particular index
 * @head: head of linked list listint_t
 * @index: index to delete node
 * Return: (1) Sucess and (-1) on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *node_tmp;
	int i = 0;

	if (head)
	{
		tmp = *head;

		while (tmp)
		{
			if (index == 0 && i == 0)
			{
				node_tmp = (*head)->next;
				free(*head);
				*head = node_tmp;
				return (1);
			}
			else if (i == ((int)index - 1))
			{
				node_tmp = tmp->next;
				tmp->next = node_tmp->next;
				free(node_tmp);
				return (1);
			}
			tmp = tmp->next;
			i++;
		}
		if (((int)index > i) || ((int)index < 0))
			return (-1);
	}

	return (-1);
}
