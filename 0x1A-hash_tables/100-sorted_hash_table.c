#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}

shash_node_t *create_new_node(shash_table_t *ht, unsigned long int index, const char *key, const char *value)
{
	shash_node_t *new_node = NULL;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (new_node);
}

void sort_shash_node_t(shash_table_t **ht, shash_node_t **new_node)
{
	shash_node_t *head = (*ht)->shead;
	shash_node_t *node = *new_node, *prev, *next;

	if (head == NULL)
	{
		(*ht)->shead = (*ht)->stail = node;
		return;
	}
	while (head)
	{
		if (head->key[0] >= node->key[0])
		{
			next = head;
			prev = head->sprev;
			node->snext = next;
			node->sprev = prev;
			next->sprev = node;
			if (prev)
				prev->snext = node;
			if (!node->sprev)
				(*ht)->shead = node;
			break;
		}
		else if (node->key[0] > head->key[0])
		{
			if (!head->snext || (head->snext &&  head->snext->key[0] > node->key[0]))
			{
				prev = head;
				next = head->snext;
				node->snext = next;
				node->sprev = prev;
				prev->snext = node;
				if (next)
					next->sprev = node;
				if (!node->snext)
					(*ht)->stail = node;
				break;
			}
		}
		head = head->snext;
	}
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	    || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = create_new_node(ht, index, key, value);
	if (!new_node)
		return (0);

	sort_shash_node_t(&ht, &new_node);

	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *found_node = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	found_node = ht->array[index];

	if (found_node == NULL)
		return (NULL);

	while (found_node)
	{
		if (strcmp(found_node->key, key) == 0)
			return (found_node->value);
		found_node = found_node->next;
	}

	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	int i;
	shash_node_t *tmp;
	int first_flag = 0;

	if (ht == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		if (first_flag <= 1)
			first_flag++;
		if (first_flag == 2)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	int i;
	shash_node_t *tmp;
	int first_flag = 0;

	if (ht == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		if (first_flag <= 1)
			first_flag++;
		if (first_flag == 2)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * free_dlistint - frees a doubly linked list
 * @head: beginning of dlistint_t linked list
 * Return: nothing
 */

void free_shash_node_t_list(shash_node_t *head)
{
	shash_node_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}

void shash_table_delete(shash_table_t *ht)
{
	int i;
	shash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			free(node->value);
			free(node->key);
			node = node->next;
		}
	}
	free_shash_node_t_list(ht->shead);
	free(ht->array);
	free(ht);
}
