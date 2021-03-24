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
  listint_t *slow = (listint_t *)head;
  listint_t *fast = (listint_t *)head;

    while(slow) {
        i++;
        printf("[%p] %d\n", slow, slow->n);
        slow = slow->next;
        if (fast && fast->next){
          fast = fast->next->next;
          if (fast == slow){
            printf("[%p] %d\n", slow, slow->n);
            slow = slow->next;
            printf("[%p] %d\n", slow, slow->n);
            printf("-> [%p] %d\n", slow->next, slow->next->n);
            i += 2;
            exit(98);
          }
        }
    }
	return (i);
}
