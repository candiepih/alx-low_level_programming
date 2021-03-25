# C - Singly linked lists
The aim of this topic was to understand when and why using linked lists vs arrays and how to build and use linked lists. Below task files helped understanding the topic more.
### The following data structure was used for the project
```c

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```
## 0-print_list.c
Function that prints all the elements of a list_t list.
## 1-list_len.c
Function that returns the number of elements in a linked list_t list.
## 2-add_node.c
Function that adds a new node at the beginning of a list_t list.
* Prototype: `list_t *add_node(list_t **head, const char *str)`;
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* `strdup` allowed

## 3-add_node_end.c
Function that adds a new node at the end of a list_t list.
* Prototype: `list_t *add_node_end(list_t **head, const char *str)`;
* Return: the address of the new element, or `NULL` if it failed
* str needs to be duplicated

## 4-free_list.c
Function that frees a list_t list.
## lists.h
Contains function prototypes and declarations and structure declarations
