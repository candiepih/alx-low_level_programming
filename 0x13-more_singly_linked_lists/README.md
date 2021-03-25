# C - More singly linked lists
Topic helped in understanding more on how to use linked lists. Following task files were used to help in grasping various concepts
### The following data structure was used for this project
```c

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

```
## 0-print_listint.c
Function that prints all the elements of a `listint_t` list.
## 1-listint_len.c
Function that returns the number of elements in a linked `listint_t` list.
## 2-add_nodeint.c
Function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n)`;
* Return: the `address` of the new element, or `NULL` if it failed

## 3-add_nodeint_end.c
Function that adds a new node at the end of a `listint_t` list.
## 4-free_listint.c
Function that frees a `listint_t` list.
## 5-free_listint2.c
Function that frees a `listint_t` list and sets head to `NULL`
## 6-pop_listint.c
Function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
## 7-get_nodeint.c
Function that returns the nth node of a listint_t linked list.
* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`;
* where `index` is the index of the node, starting at 0
* if the node does not exist, returns `NULL`

## 8-sum_listint.c
Function that returns the sum of all the data (n) of a listint_t linked list.
## 9-insert_nodeint.c
Function that inserts a new node at a given position.
* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`;
* where `idx` is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

## 10-delete_nodeint.c
Function that deletes the node at index index of a listint_t linked list.
## 100-reverse_listint.c
Function that reverses a listint_t linked list.
* Prototype: `istint_t *reverse_listint(listint_t **head)`;
* Returns: a pointer to the first node of the reversed list
* Not allowed to use more than `1` loop.
* Not allowed to use `malloc`, `free` or `arrays`
* Only declare a maximum of two variables in your function

## 101-print_listint_safe.c
Function that prints a listint_t linked list.
* Prototype: `size_t print_listint_safe(const listint_t *head)`;
* Returns: the number of nodes in the list
* This function can print lists with a loop
* You should go through the list only once
* If the function fails, `exit` the program with status `98`

## lists.h
Contains all function and structures declarations
