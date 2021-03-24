#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: starting point of a listint_t linked list
 * Description: detects a cycle in the listint-t linked list by using
 * floyd's cycle algorithm
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	listint_t *slow;
	listint_t *fast;

	if (!head)
		exit(98);

	slow = (listint_t *)head;
	fast = (listint_t *)head;

	while (slow)
	{
		i++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		if (fast && fast->next)
		{
			fast = fast->next->next;
			if (fast == slow)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = slow;
				if (slow == fast)
				{
					printf("[%p] %d\n", (void *)slow, slow->n);
					printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
					slow->next = NULL;
					slow = slow->next;
					i += 2;
				}
			}
		}
	}

	return (i);
}
