#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a particular index
 * @head: head of linked list listint_t
 * @idx: index to insert new node
 * @n: integer value to assign to (n) of listint_t
 * Return: address of new node or NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	tmp = *head;

	while (tmp)
	{
		if ((idx == 0) && (i == 0))
		{
			new_node->next = *head;
			*head = new_node;
		}
		else if (i == (idx - 1))
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		tmp = tmp->next;
		i++;
	}

	if ((idx > i) || (idx < 0))
		return (NULL);

	return (new_node);
}
