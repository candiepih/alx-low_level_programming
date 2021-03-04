#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: pointer to allocated memory. Also if malloc
 * fails it terminates normally with status value 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b >= INT_MAX)
		exit(98);

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
