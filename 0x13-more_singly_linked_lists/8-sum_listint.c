#include "lists.h"

/**
 * sum_listint -  calculates sum of all the data (n) of a
 * listint_t linked list.
 * @head: head of a listint_t linked list
 * Return: sum of (n) of a listint_t
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
