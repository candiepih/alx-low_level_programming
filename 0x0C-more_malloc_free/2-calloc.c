#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: the amoutn of memory bytes to alocate
 * @size: the size per each byte
 * Return: pinter to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i = 0;
	int s;

	s = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(s);
	if (!p)
		return (0);

	while (s--)
	{
		p[i] = 0;
		i++;
	}

	return p;
}
