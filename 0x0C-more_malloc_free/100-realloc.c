#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old allocated size of memory
 * @new_size: the new amout of memory to be allocated
 * Return: pointer to the new allocated memory, @ptr if new_size == old_size
 * or free @ptr if @new_size is 0 or @ptr is not null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newlocation;
	int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newlocation = malloc(sizeof(*newlocation) * new_size);

	if (!newlocation)
		return (0);

	for (i = 0; i < (int)old_size; i++)
		newlocation[i] = *((char *)ptr + i);

	free(ptr);

	return (newlocation);
}
