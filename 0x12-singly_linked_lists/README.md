# C - Singly linked lists
The aim of this topic was to understand when and why using linked lists vs arrays and how to build and use linked lists. Below task files helped understanding the topic more.
The following data structure was used for the project
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
function that prints all the elements of a list_t list.
