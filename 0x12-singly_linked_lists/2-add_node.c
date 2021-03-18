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
 * add_node - adds a new node at the beggining of the list
 * @head: pointer to the address of head
 * @str: string
 * Return: address of the new node created
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen((char *)str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
