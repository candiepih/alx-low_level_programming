#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array to create
 * Return: pointer to the newly created hash table or NULL on
 * failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	int i;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table->array) * size);
	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
