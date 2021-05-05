#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a certain index
 * @h: beginning of dlistint_t linked list
 * @idx: the position to insert the new node
 * @n: data (n) of dlistint_t node
 *
 * Return: (new_node) on success or (NULL) on failure
 * to add the new node at index idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	int i = 0;

	if (!h)
		return (NULL);
	tmp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if ((int)idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	while (tmp)
	{
		if (i == ((int)idx - 1))
		{
			if (!tmp->next)
			{
				free(new_node);
				return (add_dnodeint_end(h, n));
			}
			new_node->next = tmp->next;
			new_node->prev = tmp;
			tmp->next->prev = new_node;
			tmp->next = new_node;
		}
		tmp = tmp->next;
		i++;
	}
	if (((int)idx > i) || ((int)idx < 0))
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
