#include "lists.h"

/**
 * _strlen - get string length
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of the linked list
 * @str: string value to assign to string value of node
 * Return: new_node created;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen((char *)str);
	new_node->next = NULL;

	if(*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		while(last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (new_node);
}

