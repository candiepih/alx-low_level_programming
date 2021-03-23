#include "lists.h"

/**
 * free_listint2 - frees a linked list of listint_t
 * @head: head of linked list of listint_t
 * Description: finally sets the head to NULL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t tmp = *head;

	if (tmp && tmp->next)
                free_listint2(&tmp->next);
        free(tmp);
        *head = NULL;
}
