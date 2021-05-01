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
	dlistint_t *new_node;
	dlistint_t *current_node;
	unsigned int index = 0;

	if (!h || ((int)n < 0))
		return (NULL);
	if ((int)idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	current_node = *h;
	while (current_node)
	{
		if (index == idx)
		{
			new_node->n = n;
                        new_node->next = current_node;
                        new_node->prev = current_node->prev;
                        current_node->prev->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		index++;
	}
	if (!current_node && (index == idx))
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}

	return (NULL);
}
